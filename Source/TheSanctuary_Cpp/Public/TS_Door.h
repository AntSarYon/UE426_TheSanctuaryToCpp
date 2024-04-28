// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TS_Door.generated.h"

//Declaramos que usaremos esta clase
class UStaticMeshComponent;

UCLASS()
class THESANCTUARY_CPP_API ATS_Door : public AActor
{
	GENERATED_BODY()
	
public:	
	//CONSTRUCTOR
	ATS_Door();

	//Creación de Componentes -> Siempre con Punteros
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components") // Permite visualizar la variable dentro del motor.
	USceneComponent* customRootComp; //Raíz de Escena(Scene root)

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* SMDoorFrameComp; //Static Mesh

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* SMDoorComp; //Static Mesh

	//Angulo de apertura de la puerta
	UPROPERTY(EditAnywhere, Category = "My Door Properties")	// EditAnywhere -> Podremos modificar esta variable donde sea, en cualquier momento. Se obedece al valor asignado de cada instancia
																// EditDefaultsOnly -> Siempre obedecerá al valor asignado dentro de la clase (rige a todos)
	float openAngle;

protected:
	//EVENTO BEGIN PLAY
	virtual void BeginPlay() override;

public:
	//EVENTO TICK
	virtual void Tick(float DeltaTime) override;
	//FUNCIÓN ABRIR PUERTA
	void OpenDoor();

};
