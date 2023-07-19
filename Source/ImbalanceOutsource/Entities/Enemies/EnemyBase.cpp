// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBase.h"


// Sets default values
AEX_EnemyBase::AEX_EnemyBase()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AEX_EnemyBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEX_EnemyBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

