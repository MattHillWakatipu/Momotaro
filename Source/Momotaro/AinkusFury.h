// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Card.h"
#include "AinkusFury.generated.h"

/**
 * 
 */
UCLASS()
class MOMOTARO_API AAinkusFury : public ACard
{
	GENERATED_BODY()

public:

	AAinkusFury();

	UFUNCTION(BlueprintCallable)
	void SetValues(int AttackValue);
};
