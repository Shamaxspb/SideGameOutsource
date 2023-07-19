// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ImbalanceOutsource/Entities/AllEnums.h"
#include "EnemyBase.generated.h"

UCLASS()
class IMBALANCEOUTSOURCE_API AEX_EnemyBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEX_EnemyBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere)
	EEX_EnemyMovementType MovementType;

	UPROPERTY(EditAnywhere)
	bool bElite;

	UPROPERTY(EditAnywhere)
	float PowerCost;
};
