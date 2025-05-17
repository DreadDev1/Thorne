// Copyright Epic Games, Inc. All Rights Reserved.

#include "Framework/ThorneGameMode.h"
#include "UObject/ConstructorHelpers.h"

AThorneGameMode::AThorneGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
