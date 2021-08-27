// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackCard.h"

// Sets default values
AAttackCard::AAttackCard()
{
	static ConstructorHelpers::FObjectFinder<UClass> FloorCellClassFinder(TEXT("Blueprint'/Game/Katana.Katana_C'")); 
	Blueprint = FloorCellClassFinder.Object;

}

// Called when the game starts or when spawned
void AAttackCard::SetValues(int AttackValue)
{
	ValueMap.insert(pair<ValueType, int>(Attack, AttackValue));

}