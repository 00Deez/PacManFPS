// Fill out your copyright notice in the Description page of Project Settings.

#include "RedGhostController.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/World.h"


int mapArray[40][48] =
{

	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, // row 0
	{ 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 1, 1, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1 }, // row 1
	{ 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1 }, // row 2
	{ 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1 }, // row 3
	{ 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1 }, // row 4
	{ 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1 }, // row 5
	{ 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1 }, // row 6
	{ 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1 }, // row 7
	{ 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1 }, // row 8
	{ 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1 }, // row 9
	{ 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 1, 1, 1, 2, 0, 0, 0, 0, 0, 2, 1, 1, 1, 1, 2, 0, 0, 0, 0, 0, 2, 1, 1, 1, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1 }, // row 10
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, // row 11
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, // row 12
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, // row 13
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 2, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, // row 14
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, // row 15
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, // row 16
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, // row 17
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, // row 18
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, // row 19
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, // row 20
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, // row 21
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, // row 22
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, // row 23
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, // row 24
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, // row 25
	{ 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 1, 1, 1, 1, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1 }, // row 26
	{ 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1 }, // row 27
	{ 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1 }, // row 28
	{ 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1 }, // row 29
	{ 1, 2, 0, 0, 0, 2, 1, 1, 1, 1, 2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2, 1, 1, 1, 1, 2, 0, 0, 0, 2, 1 }, // row 30
	{ 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1 }, // row 31
	{ 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1 }, // row 32
	{ 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1 }, // row 33
	{ 1, 2, 0, 0, 0, 2, 0, 0, 0, 0, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2, 1, 1, 1, 1, 2, 0, 0, 0, 0, 0, 2, 1, 1, 1, 1, 2, 0, 0, 0, 0, 2, 0, 0, 0, 2, 1 }, // row 34
	{ 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1 }, // row 35
	{ 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1 }, // row 36
	{ 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1 }, // row 37	
	{ 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1 }, // row 38
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, // row 39
};

// Sets default values
ARedGhostController::ARedGhostController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RedGhostMesh=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RedGhostMesh"));
	RootComponent = RedGhostMesh;
	
	enteringIntersection = false;
	speed = 150.0f;
	right = true;
	myDirection = LEFT;
	
}

// Called when the game starts or when spawned
void ARedGhostController::BeginPlay()
{
	Super::BeginPlay();
	SpawnLocation = convertToMapLiteral(spawnPoint);
	//endLocation = FVector(-850, -400, 140);
	//FVector NewLocation = GetActorLocation();
	UE_LOG(LogTemp, Warning, TEXT("starting x = %i"), (int)SpawnLocation.X);
	UE_LOG(LogTemp, Warning, TEXT("starting Y = %i"), (int)SpawnLocation.Y);
	SetActorLocation(SpawnLocation);

	//currentLocation = GetActorLocation();
	nextTile = GetNextTile();
	
}

void ARedGhostController::CalculateTarget()
{


}


FVector ARedGhostController::GetNextTile()
{
	UE_LOG(LogTemp, Warning, TEXT("GetNextTile called."));

	FVector NewLocation = GetActorLocation();
	float currentX = NewLocation.X;
	float currentY = NewLocation.Y;
	FVector nextTileTemp = convertToArrayLiteral(FVector2D(currentX, currentY));
	UE_LOG(LogTemp, Warning, TEXT("Current Tile:"));
	UE_LOG(LogTemp, Warning, TEXT("x = %i"), (int)nextTileTemp.X);
	UE_LOG(LogTemp, Warning, TEXT("y= %i"), (int)nextTileTemp.Y);

	switch (myDirection) {
	case LEFT:
		UE_LOG(LogTemp, Warning, TEXT("Current Direction: Left"));
		nextTileTemp = FVector(nextTileTemp.X - 1, nextTileTemp.Y, nextTileTemp.Z);
		break;
	case RIGHT:
		UE_LOG(LogTemp, Warning, TEXT("Current Direction: Right"))
		nextTileTemp = FVector(nextTileTemp.X + 1, nextTileTemp.Y, nextTileTemp.Z);
		break;
	case UP:
		UE_LOG(LogTemp, Warning, TEXT("Current Direction: Up"))
		nextTileTemp = FVector(nextTileTemp.X, nextTileTemp.Y - 1, nextTileTemp.Z);
		break;
	case DOWN:
		UE_LOG(LogTemp, Warning, TEXT("Current Direction: Down"))
		nextTileTemp = FVector(nextTileTemp.X, nextTileTemp.Y + 1, nextTileTemp.Z);
		break;
	}

	UE_LOG(LogTemp, Warning, TEXT("calculating next tile"));
	UE_LOG(LogTemp, Warning, TEXT("next x = %i"), (int)nextTileTemp.X);
	UE_LOG(LogTemp, Warning, TEXT("next y= %i"), (int)nextTileTemp.Y);
	enteringIntersection = isIntersection(nextTileTemp);

	return convertToMapLiteral(FVector2D(nextTileTemp.X, nextTileTemp.Y));


}

bool ARedGhostController::isIntersection(FVector arrayLocation)
{
	int next = mapArray[(int)arrayLocation.Y][(int)arrayLocation.X];
	UE_LOG(LogTemp, Warning, TEXT("next Tile Value = %i"), next);
	if (next == 2)
	{
		UE_LOG(LogTemp, Warning, TEXT("Entering an Intersection"));
		return true;
	}
	return false;
}

FVector ARedGhostController::convertToArrayLiteral(FVector2D mapLocation)
{
	
	int xPos = (((int)mapLocation.X - 50) / 100) +24;

	int yPos = (((int)mapLocation.Y / 100) + 18);
	return FVector(xPos, yPos, 140);

}


FVector ARedGhostController::convertToMapLiteral(FVector2D mapLocation)
{
	int xPos = (((int)mapLocation.X - 24) * 100) + 50;
	int yPos = (((int)mapLocation.Y - 18) * 100);
	UE_LOG(LogTemp, Warning, TEXT("Calculated next location X = %i"),xPos);
	UE_LOG(LogTemp, Warning, TEXT("Calculated next location Y = %i"),yPos);

	return FVector(xPos, yPos, 140);

}

// Called every frame
void ARedGhostController::Tick(float DeltaTime)
{
	
	Super::Tick(DeltaTime);
	currentLocation = GetActorLocation();
	//currentLocation.X -= speed * DeltaTime;
	switch (myDirection) {
		case LEFT: 
			if (currentLocation.X <= nextTile.X) {
				if (enteringIntersection)
				{
					currentLocation.X = nextTile.X;
					SetActorLocation(currentLocation);

					UE_LOG(LogTemp, Warning, TEXT("changing to down"));
					calculateNextDirection();
				}
				nextTile = GetNextTile();

			}
			else {
				currentLocation.X -= speed * DeltaTime;
				SetActorLocation(currentLocation);
			}
		break;
		case RIGHT: 
			if (currentLocation.X >= nextTile.X) {
				if (enteringIntersection)
				{
					currentLocation.X = nextTile.X;
					SetActorLocation(currentLocation);

					UE_LOG(LogTemp, Warning, TEXT("changing to UP"));
					calculateNextDirection();
				}
				nextTile = GetNextTile();

			}
			else {
				currentLocation.X += speed * DeltaTime;
				SetActorLocation(currentLocation);
			}
		break;
		case UP: 
			if (currentLocation.Y <= nextTile.Y) {
				if (enteringIntersection)
				{
					currentLocation.Y = nextTile.Y;
					SetActorLocation(currentLocation);

					UE_LOG(LogTemp, Warning, TEXT("changing to LEFT"));
					calculateNextDirection();
				}
				nextTile = GetNextTile();

			}
			else {
				currentLocation.Y -= speed * DeltaTime;
				SetActorLocation(currentLocation);
			}
		break;
		case DOWN:
			if (currentLocation.Y >= nextTile.Y) {
				if (enteringIntersection)
				{
					currentLocation.Y = nextTile.Y;
					SetActorLocation(currentLocation);
					UE_LOG(LogTemp, Warning, TEXT("changing to RIGHT"));
					calculateNextDirection();
				}
				nextTile = GetNextTile();

			}
			else {

				currentLocation.Y += speed * DeltaTime;
				SetActorLocation(currentLocation);
			}
		break;
	}
	//targetLocation = FMath::VInterpTo(GetActorLocation(), endLocation, DeltaTime, speed);

	//Get Current Location
	/*
		Literal to Array : 
		literal minus 50, divided by 100, plus 22 = array "X" (second arguement)
		first arguement = literal divided by 100 plus 17
		
	
	
	
	
	*/
	//Check Direction of Tavel
	//Check that next node in direction isn't a wall
	//Check that current node isn't a decision node
	//if we arent on a decision node, travel in direction.
	//if we are on a decision node, check which directions are possible.
	// choose a direction (randomly at first)
	// change travel direction to new direction of travel.
	//repeat




	
}

ARedGhostController::direction ARedGhostController::calculateNextDirection()
{
	direction returnDir = RIGHT;
	int random = FMath::RandRange(1, 4);
	switch (random) {
	case 1: returnDir = UP;
		break;
	case 2: returnDir = DOWN;
		break;
	case 3: returnDir = LEFT;
		break;
	case 4: returnDir = RIGHT;
		break;
	}
	if (returnDir == reverseDirection()) {
		return calculateNextDirection();
	}


	return returnDir;
}

ARedGhostController::direction ARedGhostController::reverseDirection() {

	switch (myDirection) {
		case RIGHT: return LEFT;
		case LEFT: return RIGHT;
		case DOWN: return UP;
		case UP: return DOWN;
	}
	return RIGHT;
}

