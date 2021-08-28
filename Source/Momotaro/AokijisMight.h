// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Card.h"
#include "AokijisMight.generated.h"

/**
 * 
 */
UCLASS()
class MOMOTARO_API AAokijisMight : public ACard
{
	GENERATED_BODY()

public:

	AAokijisMight();

	void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void SetValues(int BuffValue);
	
};
