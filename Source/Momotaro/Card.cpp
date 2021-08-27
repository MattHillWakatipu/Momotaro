// Fill out your copyright notice in the Description page of Project Settings.


#include "Card.h"
#include <string>

using namespace std;

// Sets default values
ACard::ACard()
{
 	

}



// Called when the game starts or when spawned
void ACard::BeginPlay()
{
	Super::BeginPlay();
	
}

// Gets the relevant value from the ValueMap
int ACard::GetValue(ValueType Type)
{
	return ValueMap.at(Type);
}

TSubclassOf<ACard> ACard::GetBlueprint()
{
	return Blueprint;
}