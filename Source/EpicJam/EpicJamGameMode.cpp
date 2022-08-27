// Copyright Epic Games, Inc. All Rights Reserved.

#include "EpicJamGameMode.h"
#include "EpicJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEpicJamGameMode::AEpicJamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
