// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyShooter.h"


// Sets default values
AEX_EnemyShooter::AEX_EnemyShooter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AEX_EnemyShooter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEX_EnemyShooter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AEX_EnemyShooter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

