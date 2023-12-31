// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyBase.h"
#include "EnemyShooter.generated.h"

UCLASS()
class IMBALANCEOUTSOURCE_API AEX_EnemyShooter : public AEX_EnemyBase
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEX_EnemyShooter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
