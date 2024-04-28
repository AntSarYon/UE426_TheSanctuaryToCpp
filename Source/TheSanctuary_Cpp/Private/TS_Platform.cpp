// Fill out your copyright notice in the Description page of Project Settings.


#include "TS_Platform.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ATS_Platform::ATS_Platform()
{
 	// Indicamos si este Actor utiliza el evento Tick
	PrimaryActorTick.bCanEverTick = true;

	//Creamos el Componente Raiz y lo asignamos a la variable correspondiente.
	customRootComp = CreateDefaultSubobject<USceneComponent>(TEXT("CustomRoot"));
	//Indicamos que este será el RootComponent
	RootComponent = customRootComp;

	//Creamos el Componente de Static Mesh y lo asignamos a la variable correspondiente.
	PlatformMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMesh"));
	//Colocamos al Mesh como Hijo del Root
	PlatformMeshComp->SetupAttachment(customRootComp);

	//Inicializamos varibales de movimiento y altura
	IsGoingUp = true;
	Speed = 7.5f;
	MinHeight = 0.0f;
	MaxHeight = 50.0f;
}

//-----------------------------------------------------------------------------------------

void ATS_Platform::BeginPlay()
{
	Super::BeginPlay();
	
}

//-----------------------------------------------------------------------------------------

void ATS_Platform::Move()
{
	//Empleamos una libreria para obtener el Vector hacia arriba (considerando rotación) del Actor
	FVector upDirection = UKismetMathLibrary::GetUpVector(GetActorRotation());

	//Si estamos yendo hacia arriba
	if(IsGoingUp)
	{
		//El vector de direccion se mantendra hacia arriba 
		upDirection = upDirection;
	}
	//So estamos yendo hacia abajo
	else
	{
		//El vector de direccion se invertirá (irá hacia abajo).
		upDirection *= -1;
	}

	//Creamos un Vector con la Velocidad
	FVector CurrentVelocity = upDirection * Speed;

	//Creamos Vector con la nueva posición
	FVector newPosition = GetActorLocation() + CurrentVelocity;

	//Asignamos la nueva posición
	SetActorLocation(newPosition);

	//Revisamos si hemos llegado a la Altura máxima (o minima)
	if((IsGoingUp && GetActorLocation().Z >= MaxHeight) || (!IsGoingUp && GetActorLocation().Z <= MinHeight))
	{
		//Invertimos el valor del booleano
		IsGoingUp = !IsGoingUp;
	}

}

//-----------------------------------------------------------------------------------------

void ATS_Platform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Moveremos la plataforma constantemente
	Move();
}

