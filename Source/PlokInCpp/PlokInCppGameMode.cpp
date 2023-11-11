// Copyright Epic Games, Inc. All Rights Reserved.

#include "PlokInCppGameMode.h"
#include "PlokInCppCharacter.h"
#include "UObject/ConstructorHelpers.h"

APlokInCppGameMode::APlokInCppGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
