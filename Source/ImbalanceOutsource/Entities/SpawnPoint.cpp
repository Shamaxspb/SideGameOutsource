// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnPoint.h"


// Sets default values
AEX_SpawnPoint::AEX_SpawnPoint()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

/*void AEX_SpawnPoint::Spawn(EnemyClass* enemy)
{
	bool bEliteEnemy;

	//FMath::FRand() < Fight.EliteProbability ? bEliteEnemy = true : bEliteEnemy = false;
}*/

// Called when the game starts or when spawned
void AEX_SpawnPoint::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEX_SpawnPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

