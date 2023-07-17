// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyJumper.h"


// Sets default values
AEnemyJumper::AEnemyJumper()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AEnemyJumper::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyJumper::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AEnemyJumper::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

