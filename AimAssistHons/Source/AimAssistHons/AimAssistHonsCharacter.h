// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "Kismet/KismetMaterialLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Target.h"
#include "AimAssistHonsCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class UCameraComponent;
class UInputAction;
class UInputMappingContext;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class AAimAssistHonsCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Mesh, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	

	bool targetHit = false; //checks wheather the target has been hit

	bool AimAssistHelper = false; //helper variable to stop player from getting stuck on the target when Aim Assist is on

	float angle = 0.0f; //variable used to store the angle between player forward vector and player->target
	



public:
	AAimAssistHonsCharacter();

protected:
	virtual void BeginPlay();

public:
		
	virtual void Tick(float DeltaTime);

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* ShootAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ATarget* target;


	//accuracy vars
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float targetShot = 0.0f; //number of targets player has hit

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float shotGun = 0.0f; //number of times the player has pressed the shoot button

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float accuracy = 0.0f; //the players accuracy rating

	//aim assist vars
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float aimAssistLimit = 15.0f; //angle limit at which target gravity activates

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool aimAssistOn = false; //toggle aim assist

	//sound effect
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundBase* soundCue; //used to play sound when player hits target

protected:
	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	/** Called for looking input */
	void Shoot(const FInputActionValue& Value);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

public:
	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

};

