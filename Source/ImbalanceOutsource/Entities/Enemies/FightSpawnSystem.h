// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/Object.h"
#include "FightSpawnSystem.generated.h"

/**
 * 
 */
UCLASS()
class IMBALANCEOUTSOURCE_API UFightSpawnSystem : public UObject
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDataTableRowHandle FightHandle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentLivingPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentKilledPower;
};
