// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TS_Platform.generated.h"

class UStaticMeshComponent;

UCLASS()
class THESANCTUARY_CPP_API ATS_Platform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATS_Platform();

protected:
	//COMPONENTES
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components") // Permite visualizar la variable dentro del motor.
	USceneComponent* customRootComp; //Raíz de Escena(Scene root)

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* PlatformMeshComp;

	//Variables (Propiedades)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Platform properties")
	bool IsGoingUp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Platform properties")
	float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Platform properties")
	float MaxHeight;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Platform properties")
	float MinHeight;

protected:
	//Evento BeginPlay
	virtual void BeginPlay() override;

	//Función MOVER
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void Move();

public:	
	//Evento Tick
	virtual void Tick(float DeltaTime) override;

};
