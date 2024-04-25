// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheSanctuary_CPPGameMode.h"
#include "TheSanctuary_CPPHUD.h"
#include "TheSanctuary_CPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheSanctuary_CPPGameMode::ATheSanctuary_CPPGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATheSanctuary_CPPHUD::StaticClass();
}
