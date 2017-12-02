// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ThisIsHowYouGetAntsGameMode.h"
#include "ThisIsHowYouGetAntsPlayerController.h"
#include "ThisIsHowYouGetAntsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThisIsHowYouGetAntsGameMode::AThisIsHowYouGetAntsGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AThisIsHowYouGetAntsPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}