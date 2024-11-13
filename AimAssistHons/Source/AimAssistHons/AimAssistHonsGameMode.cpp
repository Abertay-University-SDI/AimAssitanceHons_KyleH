// Copyright Epic Games, Inc. All Rights Reserved.

#include "AimAssistHonsGameMode.h"
#include "AimAssistHonsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAimAssistHonsGameMode::AAimAssistHonsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
