// Fill out your copyright notice in the Description page of Project Settings.


#include "TS_MyCharacter.h"
#include "Camera\CameraComponent.h"

// Sets default values
ATS_MyCharacter::ATS_MyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Creamos el Componente Camara que habiamos declarado
	FPSCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	//Ponemos al componente cámara como hijo del RootComponent
	FPSCameraComponent->SetupAttachment(RootComponent);
	//Activamos un Flag para que la Cámara siga la Rotación que recibe el Pawn
	FPSCameraComponent->bUsePawnControlRotation = true;
}

//-----------------------------------------------------------------------

// Called when the game starts or when spawned
void ATS_MyCharacter::BeginPlay()
{
	Super::BeginPlay();
}

//-----------------------------------------------------------------------

void ATS_MyCharacter::MoveForward(float value)
{
	//Agregamos un Input de Movimiento, en base del Vector Frontal del Actor
	AddMovementInput(GetActorForwardVector() * value);
}

//-----------------------------------------------------------------------

void ATS_MyCharacter::MoveRight(float value)
{
	//Agregamos un Input de Movimiento, en base del Vector Frontal del Actor
	AddMovementInput(GetActorRightVector() * value);
}

//-----------------------------------------------------------------------

void ATS_MyCharacter::Jump()
{
	//Utilizamos la implementación por defecto de la Clase Character
	Super::Jump();
}

//-----------------------------------------------------------------------

void ATS_MyCharacter::StopJumping()
{
	//Utilizamos la implementación por defecto de la Clase Character
	Super::StopJumping();
}

//-----------------------------------------------------------------------

// Called every frame
void ATS_MyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//-----------------------------------------------------------------------

// Called to bind functionality to input
void ATS_MyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// BindAxis: Utlizado para todo Input que sea Progresivo (Joystick) 
	PlayerInputComponent->BindAxis("MoveForward", this, &ATS_MyCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ATS_MyCharacter::MoveRight);

	//Recibe el nombre de la Acción, una referencia al mismo Charcter, y una Función correspondiente con la Acción que seberá ejecutarse.

	PlayerInputComponent->BindAxis("LookUp", this, &ATS_MyCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookRight", this, &APawn::AddControllerYawInput);

	//En las lineas anteriores se estan usando funciones de la Clase Pawn ya definidas para mover la camara
	
	//Utilizado para las acciones que suceden, o no suceden (boton oprimido).
	PlayerInputComponent->BindAction("Jump",IE_Pressed, this,  &ATS_MyCharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ATS_MyCharacter::StopJumping);
	//Recibe el nombre de la Acción, el Evento especifico del KeyMapeado , una referencia al mismo Charcter, y una Función correspondiente con la Acción que seberá ejecutarse.

	//Consideración: Los Action o Axis Mapping deben definisrse desde el Engine, como siempre;
	//Lo que hace el BindAxis solamente es reconocer el Maping a partir del nombre, y accionar una Funcion

}

//-----------------------------------------------------------------------

void ATS_MyCharacter::AddControllerPitchInput(float Val)
{
	//Invocamos a la funcion adecuando el Valor de Value en base a
	//si el Flag de Vista invertida esta activo, o no
	Super::AddControllerPitchInput(bIsLookInversion? -Val : Val);

}

