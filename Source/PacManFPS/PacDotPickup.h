// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "PacDotPickup.generated.h"

/**
 * 
 */
UCLASS()
class PACMANFPS_API APacDotPickup : public APickup
{
	GENERATED_BODY()
public :

	APacDotPickup();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
private:
	float RunningTime;
	float InitialPosition;
	float RandomOffset;

	UPROPERTY(EditAnywhere)
	float OscRate;

	UPROPERTY(EditAnywhere)
	float Amplitude;
};
