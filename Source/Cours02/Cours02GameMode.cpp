// Copyright Epic Games, Inc. All Rights Reserved.

#include "Cours02GameMode.h"
#include "Cours02Character.h"
#include "UObject/ConstructorHelpers.h"

ACours02GameMode::ACours02GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
