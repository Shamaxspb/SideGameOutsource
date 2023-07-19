// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyBase.h"
#include "EnemyJumper.generated.h"

UCLASS()
class IMBALANCEOUTSOURCE_API AEX_EnemyJumper : public AEX_EnemyBase
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AEX_EnemyJumper();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
