// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <string>
#include <map>
#include "Card.generated.h"

using namespace std;

UENUM(BlueprintType)
enum ValueType
{
	Attack,
	Block,
	Buff,
	Debuff,
	Draw,
	Heal,
};

UCLASS()
class MOMOTARO_API ACard : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACard();

	UPROPERTY(BlueprintReadWrite)
	TSubclassOf<ACard> Blueprint;

protected:
	// Name of the card
	string Name;

	// Cost of the card
	int Cost;

	// The Rarity of the card - Common (0), Uncommon (1), Rare (2) or Special (3)
	int Rarity;

	// The Tier / Level of the card - Bronze (0), Silver (1) or Gold (2)
	int Tier;

	// Card values
	map<ValueType, int> ValueMap;

	// Value types

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable)
	int GetValue(ValueType Type);

	UFUNCTION(BlueprintCallable)
	TSubclassOf<ACard> GetBlueprint();

};
