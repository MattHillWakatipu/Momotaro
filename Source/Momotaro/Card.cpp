// Fill out your copyright notice in the Description page of Project Settings.


#include "Card.h"
#include "AokijisMight.h"
#include <string>
#include <iostream>
#include "Components/StaticMeshComponent.h"

using namespace std;

// Sets default values
ACard::ACard()
{
	if (GetWorld()) {
		struct FConstructorStatics
		{
			ConstructorHelpers::FObjectFinder<UClass> AokijisMight;
			ConstructorHelpers::FObjectFinder<UClass> AinkusFury;
			FConstructorStatics()
				: AokijisMight(TEXT("Blueprint'/Game/CardBlueprints/AokijisMight.AokijisMight_C'"))
				, AinkusFury(TEXT("Blueprint'/Game/CardBlueprints/AinkusFury.AinkusFury_C'"))
			{
			}
		};
		static FConstructorStatics ConstructorStatics;

		BlueprintMap.Add(AokijisMight, ConstructorStatics.AokijisMight.Object);
		BlueprintMap.Add(AinkusFury, ConstructorStatics.AinkusFury.Object);
	}
}

// Called when the game starts or when spawned
void ACard::BeginPlay()
{
	Super::BeginPlay();
	
}

// Gets the relevant value from the ValueMap
int ACard::GetValue(ValueType Type)
{
	if (ValueMap.Contains(Type) == 0) {
		return 0;
	}
	
	return ValueMap[Type];
}

TMap<TEnumAsByte<Cards>, TSubclassOf<ACard>> ACard::GetMap()
{
	return BlueprintMap;
}