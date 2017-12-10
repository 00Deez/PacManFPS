// Fill out your copyright notice in the Description page of Project Settings.

#include "RedGhost.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/GameEngine.h"


// Sets default values
ARedGhost::ARedGhost()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RedGhostMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RedGhostMesh"));

}

// Called when the game starts or when spawned
void ARedGhost::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARedGhost::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARedGhost::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

