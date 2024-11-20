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
	//Mesh1P->SetRelativeRotation(FRotator(0.9f, -19.19f, 5.2f));
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

	FVector playerForwardVectNorm = GetActorForwardVector();

	FVector TargetVectorNorm = target->GetActorLocation() - GetOwner()->GetActorLocation();//get vector from player to target
	TargetVectorNorm.Normalize();

	//get angle between player->Target and player forward vector
	angle = (180.0) / UE_DOUBLE_PI * FMath::Acos(FVector::DotProduct(playerForwardVectNorm.GetSafeNormal(0.0001), TargetVectorNorm));

	//TO DO: TARGET GRAVITY NOT WORKING, CLOSEST I GOT WAS ADDCONTROLLERYAWINPUT BUT EVEN THAT WAS GLITCHY. TRY SOMETHING!!!
	
	//if (angle >= 0.99)
	//{
	//	isRotating = false;
	//}
	//else
	//{

	//	FRotator targetRotation = TargetVectorNorm.Rotation();

	//	FRotator NewRotation = FMath::RInterpTo(GetActorRotation(), targetRotation, DeltaTime, 5);
	//	SetActorRotation(NewRotation);

	//	//float TargetGravityInput = FMath::Atan2(TargetVectorNorm.Y, TargetVectorNorm.X);

	//	////radians to degrees
	//	//float RtoD = FMath::RadiansToDegrees(TargetGravityInput);
	//	//AddControllerYawInput(RtoD * 1 * DeltaTime);
	//}


	
	//SetActorRotation(FMath::RInterpTo(GetActorRotation(), FRotator(angle), DeltaTime, 10));



	//debug lines
	FString FloatMessage = FString::Printf(TEXT("The value of MyFloat is: %f"), angle);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FloatMessage);
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
	//get player controller
	APlayerController* PlayerController = Cast<APlayerController>(GetController());

	const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();

	const FVector SpawnLocation = GetOwner()->GetActorLocation();

	FCollisionQueryParams TraceParams(FName(TEXT("TraceTag")), true, nullptr);//used to specify parameters for collision 
	FHitResult HitResult;

	bool hit;

	//bullet magnetism. If players forward vector is within 10 degrees of the target the let them shoot it.

	//TO DO: GLITCH WHERE ANGLE OS NOT ACCURATE AFTER SHOOTING
	if (angle > 10)
	{
		//traces a line from the player to the first point of collision 
		hit = GetWorld()->LineTraceSingleByChannel(HitResult, SpawnLocation, UKismetMathLibrary::GetForwardVector(SpawnRotation) * 50000, ECC_Visibility, TraceParams);
	}
	else
	{
		hit = GetWorld()->LineTraceSingleByChannel(HitResult, SpawnLocation, target->GetActorLocation(), ECC_Visibility, TraceParams);
	}

	if (hit)
	{
		if (ATarget* hitTarget = Cast<ATarget>(HitResult.GetActor()))
		{
			UE_LOG(LogTemplateCharacter, Error, TEXT("sausages!"), *GetNameSafe(this));
			targetHit = true;
			hitTarget->moveTarget(targetHit);
		}
	}
}
