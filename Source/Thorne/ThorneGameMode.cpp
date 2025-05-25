// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThorneGameMode.h"
#include "ThorneCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThorneGameMode::AThorneGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
