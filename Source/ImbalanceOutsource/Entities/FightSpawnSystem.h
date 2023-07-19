// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AllStructures.h"
#include "Engine/DataTable.h"
#include "UObject/Object.h"
#include "FightSpawnSystem.generated.h"

/**
 * 
 */
UCLASS()
class IMBALANCEOUTSOURCE_API UEX_FightSpawnSystem : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	TArray<TSoftClassPtr<AEX_EnemyBase>> CreateListOfEnemies();

	/*UFUNCTION(BlueprintCallable)
	void StartFight();

	UFUNCTION(BlueprintCallable)
	void FinishFight();*/

	UFUNCTION(BlueprintCallable)
	void SetPhase();

	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsLivePowerLimitReached();

	/*UFUNCTION(BlueprintCallable, BlueprintPure)
	AEX_EnemyBase* GetNextEnemy(TArray<TSoftClassPtr<AEX_EnemyBase>> ListOfEnemies);*/

	UFUNCTION(BlueprintCallable)
	void Spawn();
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDataTable* Fight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEX_Fight_Phase> PhaseList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEX_Fight_Tier> TierList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentLivingPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentKilledPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxPhaseLivePower;
};
