// Copyright Epic Games, Inc. All Rights Reserved.

#include "FeeFiFoFumGameMode.h"
#include "FeeFiFoFumCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFeeFiFoFumGameMode::AFeeFiFoFumGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	//DefaultPawnClass = PlayerPawnClassFinder.Class;

}
