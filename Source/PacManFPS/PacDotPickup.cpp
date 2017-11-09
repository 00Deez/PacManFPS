// Fill out your copyright notice in the Description page of Project Settings.

#include "PacDotPickup.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/GameEngine.h"

APacDotPickup::APacDotPickup() : RunningTime(0.0f), InitialPosition(GetActorLocation().Z), RandomOffset(FMath::RandRange(0, 3.14)) {

}


void APacDotPickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RunningTime = RunningTime + DeltaTime;
	FVector NewLocation = GetActorLocation();
	NewLocation.Z = 110.0f + ( Amplitude * FMath::Sin((RunningTime * OscRate * 2 * 3.14159) + ((NewLocation.X / 2) + (NewLocation.Y/2))));
	SetActorLocation(NewLocation);
}