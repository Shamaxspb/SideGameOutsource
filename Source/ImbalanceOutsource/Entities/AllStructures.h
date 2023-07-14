#pragma once

#include "CoreMinimal.h"
#include "AllEnums.h"
#include "TierEnemySet.h"
#include "Engine/DataTable.h"
#include "AllStructures.generated.h"

USTRUCT(BlueprintType)
struct FEX_Tier
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTierEnemySet* TierEnemySet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TierTotalPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EliteProbability;
};

USTRUCT(BlueprintType)
struct FEX_Phase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FinishFraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PhaseTension;
};

USTRUCT(BlueprintType)
struct FEX_FightStructure : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EEX_MapSelectionType MapSelectionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UWorld*> PossibleMaps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEX_Tier> TierList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEX_Phase> PhaseList;
};