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

	

	bool targetHit = false;
	bool isRotating = true;

	bool AimAssistHelper = false;

	float angle = 0.0f;
	



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
	float targetShot = 0.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float shotGun = 0.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float accuracy = 0.0f;

	//aim assist vars
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float aimAssistLimit = 15.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool aimAssistOn = false;

	//sound effect
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundBase* soundCue;

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

