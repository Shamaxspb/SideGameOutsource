// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyBase.h"
#include "Engine/DataAsset.h"
#include "TierEnemySet.generated.h"

/**
 * 
 */
UCLASS()
class IMBALANCEOUTSOURCE_API UEX_TierEnemyData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftClassPtr<AEnemyBase>> EnemyTypes;
	
};
