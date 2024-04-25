// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TheSanctuary_CPPHUD.generated.h"

UCLASS()
class ATheSanctuary_CPPHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATheSanctuary_CPPHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

