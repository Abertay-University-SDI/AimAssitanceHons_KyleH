// Copyright Epic Games, Inc. All Rights Reserved.

#include "AimAssistHonsCharacter.h"
#include "AimAssistHonsProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Engine/LocalPlayer.h"
#include <Kismet/KismetSystemLibrary.h>
#include <Kismet/KismetMathLibrary.h>

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// AAimAssistHonsCharacter

AAimAssistHonsCharacter::AAimAssistHonsCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
		
	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-10.f, 0.f, 60.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeLocation(FVector(-30.f, 0.f, -150.f));

}

void AAimAssistHonsCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
}

void AAimAssistHonsCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//gets accuracy value
	accuracy = (targetShot / shotGun) * 100;

	//ensures that the accuracy value sent is a recognised number
	if (isnan(accuracy)) accuracy = 0;

	if (target) //checks that target has a real value & not a nullptr
	{
		//gets player forward vector and normalises it
		FVector playerForwardVectNorm = FirstPersonCameraComponent->GetForwardVector();
		playerForwardVectNorm.Normalize();

		//gets vector from player to target and normalises it
		FVector TargetVectorNorm = target->GetActorLocation() - FirstPersonCameraComponent->GetComponentLocation();
		TargetVectorNorm.Normalize();

		//gets the angle between player->Target and player forward vector
		angle = (180.0) / UE_DOUBLE_PI * FMath::Acos(FVector::DotProduct(playerForwardVectNorm, TargetVectorNorm));

		//helper function turns to false if player is on the target so they dont get stuck
		if (angle <= 2) AimAssistHelper = false;
		

		if (angle >= aimAssistLimit) AimAssistHelper = true; // helper variable turns back to true if the dot product is higher than what target gravity activation angle is

		if (aimAssistOn && AimAssistHelper) //section only happens when aim assist is activated and players aiming reticle is not on the target
		{
			//finds the proper pitch, roll and yaw values nesaccery to rotate player camera
			FRotator TargetGravityRotator = UKismetMathLibrary::FindLookAtRotation(FirstPersonCameraComponent->GetComponentLocation(), target->GetActorLocation());

		
			//Dynamic Aim Assist: change the limit at which target gravity occurs based on how accurate the player is.
			if (accuracy >= 75) aimAssistLimit = 5;
			if (accuracy < 75 && accuracy >= 50) aimAssistLimit = 10;
			if (accuracy < 50 && accuracy >= 25) aimAssistLimit = 15;
			if (accuracy < 25 && accuracy >= 0) aimAssistLimit = 20;

			// if dot product angle is between the players 'target gravity' limit and player is not facing the target 
			if (angle <= aimAssistLimit && angle > 1)
			{
				// checks that the player rotation is not the same as the rotation about to take place
				if (!FirstPersonCameraComponent->GetComponentRotation().Equals(TargetGravityRotator, 0.1f)) 
				{
					//Target Gravity: rotates camera towards target 
					Controller->SetControlRotation(UKismetMathLibrary::RInterpTo(FirstPersonCameraComponent->GetComponentRotation(), TargetGravityRotator, DeltaTime, 10));
				}
			}
		}
	}
}

void AAimAssistHonsCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{	
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AAimAssistHonsCharacter::Look);

		//shoot
		EnhancedInputComponent->BindAction(ShootAction, ETriggerEvent::Triggered, this, &AAimAssistHonsCharacter::Shoot);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void AAimAssistHonsCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AAimAssistHonsCharacter::Shoot(const FInputActionValue& Value)
{

	//check if player input is locked from "LevelBlueprint", therefore dont let player shoot.
	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		if (PC->IsLookInputIgnored()) return;
	}


	//increment the number of times the player has shot to calculate the accuracy rating
	shotGun++;
	
	//get player controller
	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	
	//gets the current rotation of the camera
	const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
	
	FCollisionQueryParams TraceParams(FName(TEXT("TraceTag")), true, nullptr);//used to specify parameters for collision 
	FHitResult HitResult;
	
	bool hit;
	
	//Bullet magnetism: If players forward vector is within 10 degrees of the target then let them shoot it.

	//start and end of the line trace
	FVector Start = FirstPersonCameraComponent->GetComponentLocation();
	FVector End;

	if (angle > 10 || !aimAssistOn) //angle is not within 10 degrees of target or aim assist is off
	{
		//cast line trace along players forward vector
		End = FirstPersonCameraComponent->GetComponentLocation() + UKismetMathLibrary::GetForwardVector(SpawnRotation) * 50000; //50,000 is some random large number to represent forward vector
	}
	else //if aim assist is on and player is within 10 degrees of the target
	{
		//cast line trace along vector from player to target 
		End = (target->GetActorLocation() - FirstPersonCameraComponent->GetComponentLocation()) * 50000; //50,000 is some random large number so player definitely hits the target
	}

	//traces a line from the player to the first point of collision 
	hit = GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, TraceParams);

	if (hit) //if player has hit something
	{
		if (ATarget* hitTarget = Cast<ATarget>(HitResult.GetActor())) //check if player has hit the target
		{
			//increments the number of times the player has hit the target & changes location of the target
			targetShot++; 
			targetHit = true;
			hitTarget->moveTarget(targetHit); //set target to new random location

			AimAssistHelper = true; // as player has hit the target turn helper variable on

			//play sound effect for hitting target
			if (soundCue)
			{
				UGameplayStatics::PlaySound2D(this, soundCue);
			}
		}
	}
}
