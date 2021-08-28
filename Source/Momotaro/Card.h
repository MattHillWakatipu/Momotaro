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


UENUM(BlueprintType)
enum Cards
{
	AokijisMight,
	AinkusFury,
};


UENUM(BlueprintType)
enum CardRarity
{
	Common,
	Uncommon,
	Rare,
	Epic,
	Fabled,
};

UENUM(BlueprintType)
enum CardTier
{
	Bronze,
	Silver,
	Gold,
};


UCLASS()
class MOMOTARO_API ACard : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACard();

	TSubclassOf<ACard> Blueprint;

	// Name of the card
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TEnumAsByte<Cards> Name;

	// Cost of the card
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int Cost;

	// The Rarity of the card - Common (0), Uncommon (1), Rare (2) or Special (3)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TEnumAsByte<CardRarity> Rarity;

	// The Tier / Level of the card - Bronze (0), Silver (1) or Gold (2)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TEnumAsByte<CardTier> Tier;

	// Card values
	TMap<ValueType, int> ValueMap;

	// Map of blueprints
	TMap<TEnumAsByte<Cards>, TSubclassOf<ACard>> BlueprintMap;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable)
	int GetValue(ValueType Type);

	UFUNCTION(BlueprintCallable)
	TMap<TEnumAsByte<Cards>, TSubclassOf<ACard>> GetMap();
};
