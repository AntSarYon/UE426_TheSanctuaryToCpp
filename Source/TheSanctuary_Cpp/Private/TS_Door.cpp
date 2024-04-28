// Fill out your copyright notice in the Description page of Project Settings.


#include "TS_Door.h"
//Importamos el Headeer de las Clases que esta usando este CPP
#include "Components/StaticMeshComponent.h"

// Sets default values
ATS_Door::ATS_Door()
{
	// ConfiguraMOS si este Actor utilizará el Evento Tick, o no -> Afecta rendimiento.
	PrimaryActorTick.bCanEverTick = true;

	//Agregamos al Actor los Componentes declarados.

	//Agregamos el RootComponent
	customRootComp = CreateDefaultSubobject<USceneComponent>(TEXT("CustomRoot"));
	RootComponent = customRootComp; //Indicamos que este será el Root Component del Actor

	//Agregamos los Meshes de la puierta como hijos del Root
	SMDoorComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
	SMDoorComp->SetupAttachment(customRootComp); //Indicamos que es hijo de otro componente

	SMDoorFrameComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorFrameMesh"));
	SMDoorFrameComp->SetupAttachment(customRootComp);
	//Inicializamos valores de variables
	openAngle = -90.0f;

}

//----------------------------------------------------------------------------------------------------

// Called when the game starts or when spawned
void ATS_Door::BeginPlay()
{
	//Invocamos al BeginPlay de su clase Padre
	Super::BeginPlay();

	//Llamamos a la function de Abrir la puerta
	OpenDoor();
	
}

//----------------------------------------------------------------------------------------------------

// Called every frame
void ATS_Door::Tick(float DeltaTime)
{
	//Invocamos al Tick de su Clase Padre
	Super::Tick(DeltaTime);

}

//----------------------------------------------------------------------------------------------------

void ATS_Door::OpenDoor()
{
	//Creamos un Rotator ingresando el Angulo de apertura
	FRotator NewRotation = FRotator(0, openAngle, 0);
	SMDoorComp->SetRelativeRotation(NewRotation);
}

