// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Card.h"
#include "AttackCard.generated.h"

/**
 * 
 */
UCLASS()
class MOMOTARO_API AAttackCard : public ACard
{
	GENERATED_BODY()

public:

	AAttackCard();

	UFUNCTION(BlueprintCallable)
	void SetValues(int AttackValue);


};
