// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Card.h"
#include <vector>
#include "Yokai.generated.h"

using namespace std;

UCLASS()
class MOMOTARO_API AYokai : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AYokai();

	// Maximum HP
	int MaximumHealth;

	// Current HP
	int CurrentHealth;

	// This Yokais deck of cards 
	TArray<ACard*> CardPile;

	// This Yokais hand of cards 
	TArray<ACard*> Hand;

	// This Yokais discard pile
	TArray<ACard*> DiscardPile;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};