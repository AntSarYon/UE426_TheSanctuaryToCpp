// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TS_MyCharacter.generated.h"

class UCameraComponent;

UCLASS()
class THESANCTUARY_CPP_API ATS_MyCharacter : public ACharacter
{
	GENERATED_BODY()

protected:

	//Componente Cámara
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category = "Components")
	UCameraComponent* FPSCameraComponent;

	//Flag para saber si la Vista vertical esta invertida
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Aiming")
	bool bIsLookInversion;

public:
	//CONSTRUCTOR
	ATS_MyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Funciones de Movimiento
	void MoveForward(float value);
	void MoveRight(float value);

	//Funciones de Salto - La clase Character ya las ha declarado, son Abstractas y vamos a Sobreescribirlas
	virtual void Jump() override;
	virtual void StopJumping() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Funcion que enlaza comandos para Disparar las Acciones del Character
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Sobreescribiremos la Función de Pawn para el movimiento vertical de la vista
	virtual void AddControllerPitchInput(float Val) override;
};
