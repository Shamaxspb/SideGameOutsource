#pragma once

#include "CoreMinimal.h"
#include "AllEnums.h"
#include "TierEnemyData.h"
#include "Engine/DataTable.h"
#include "AllStructures.generated.h"

USTRUCT(BlueprintType)
struct FEX_Fight_Tier
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UEX_TierEnemyData* TierEnemySet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(UIMin=0, UIMax=500, ClampMin=0, ClampMax=500))
	float TierTotalPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(UIMin=0, UIMax=1, ClampMin=0, ClampMax=1))
	float EliteProbability;
};

USTRUCT(BlueprintType)
struct FEX_Fight_Phase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(UIMin=0, UIMax=1, ClampMin=0, ClampMax=1))
	float FinishFraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(UIMin=0, UIMax=1, ClampMin=0, ClampMax=1))
	float PhaseTension;
};

USTRUCT(BlueprintType)
struct FEX_Fight : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UWorld*> PossibleMaps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEX_Fight_Tier> TierList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEX_Fight_Phase> PhaseList;
};