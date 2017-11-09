// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

UCLASS()
class PACMANFPS_API APickup : public AActor
{
	GENERATED_BODY()
	
private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* PickupMesh;

public:	
	// Sets default values for this actor's properties
	APickup();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Returns the mesh for pickup
	FORCEINLINE class UStaticMeshComponent* GetMesh() const { return PickupMesh; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	
	
};
