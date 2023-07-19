// Fill out your copyright notice in the Description page of Project Settings.


#include "FightSpawnSystem.h"


TArray<TSoftClassPtr<AEX_EnemyBase>> UEX_FightSpawnSystem::CreateListOfEnemies()
{
	// взять из DT_Fight:
	// - TierList
	// взять из TierList
	// - список всех тиров в файте
	// - TierTotalPower для каждого тира
	// определить каждому тиру своего юнита

	// циклом foreach пройтись по всем тирам из TierList
		// циклом добавить список врагов на сумму, указанную в TierTotalPower
	// зашафлить всех врагов в списке
	// вернуть список в FightSpawnSystem


	TArray<TSoftClassPtr<AEX_EnemyBase>> ListOfEnemies;
	
	return ListOfEnemies;
}

void UEX_FightSpawnSystem::Spawn()
{
	// выбрать нулевого юнита их массива ListOfEnemies
	// взять transform SpawnPoint'a из массива SpawnPoint'ов 
	// SpawnActorFromClass
	// убрать юнита из массива
	// CurrentLivingPower += Enemy.PowerCost
}

void UEX_FightSpawnSystem::SetPhase()
{
	
}

bool UEX_FightSpawnSystem::IsLivePowerLimitReached()
{
	return MaxPhaseLivePower > CurrentLivingPower;
}

/*AEX_EnemyBase* UEX_FightSpawnSystem::GetNextEnemy(TArray<TSoftClassPtr<AEX_EnemyBase>> ListOfEnemies)
{
	//return ListOfEnemies[0];
}*/

