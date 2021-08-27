// Fill out your copyright notice in the Description page of Project Settings.


#include "AinkusFury.h"

// Sets default values
AAinkusFury::AAinkusFury()
{
	static ConstructorHelpers::FObjectFinder<UClass> FloorCellClassFinder(TEXT("Blueprint'/Game/AinkusFury.AinkusFury_C'"));
	Blueprint = FloorCellClassFinder.Object;

}

// Called when the game starts or when spawned
void AAinkusFury::SetValues(int AttackValue)
{
	ValueMap.insert(pair<ValueType, int>(Attack, AttackValue));

}