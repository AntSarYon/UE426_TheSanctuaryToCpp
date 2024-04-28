// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheSanctuary_CppGameMode.h"
#include "TheSanctuary_CppHUD.h"
#include "TheSanctuary_CppCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheSanctuary_CppGameMode::ATheSanctuary_CppGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATheSanctuary_CppHUD::StaticClass();
}
