// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "TargetPlayerInterace.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UTargetPlayerInterace : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class AIMASSISTHONS_API ITargetPlayerInterace
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	bool isHit = false;
	
};
