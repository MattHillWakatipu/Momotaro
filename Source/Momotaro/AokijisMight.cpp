// Fill out your copyright notice in the Description page of Project Settings.


#include "AokijisMight.h"

// Sets default values
AAokijisMight::AAokijisMight()
{
	Name = AokijisMight;
	Cost = 2;
	Rarity = Common;
	Tier = Bronze;
}

// Called when the game starts or when spawned
void AAokijisMight::BeginPlay()
{
	Super::BeginPlay();
}

// Called to set the values of the card
void AAokijisMight::SetValues(int BuffValue)
{
	ValueMap.Add(Buff, BuffValue);
}