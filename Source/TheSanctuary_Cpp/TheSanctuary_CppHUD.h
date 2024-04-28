// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TheSanctuary_CppHUD.generated.h"

UCLASS()
class ATheSanctuary_CppHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATheSanctuary_CppHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

