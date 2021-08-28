// Fill out your copyright notice in the Description page of Project Settings.


#include "AinkusFury.h"

// Sets default values
AAinkusFury::AAinkusFury()
{
	Name = AinkusFury;
	Cost = 2;
	Rarity = Common;
	Tier = Bronze;
}

// Called when the game starts or when spawned
void AAinkusFury::BeginPlay()
{
	Super::BeginPlay();
}

// Called when the game starts or when spawned
void AAinkusFury::SetValues(int AttackValue)
{
	ValueMap.Add(Attack, AttackValue);
}