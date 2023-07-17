// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnPoint.generated.h"

UCLASS()
class IMBALANCEOUTSOURCE_API AEX_SpawnPoint : public AActor
{
	GENERATED_BODY()

public:
	//EEX_EnemyMovementType EnemyMovementType;


	// Sets default values for this actor's properties
	AEX_SpawnPoint();

	//void Spawn(EnemyClass* enemy);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
