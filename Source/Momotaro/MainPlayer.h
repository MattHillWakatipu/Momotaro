// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Card.h"
#include "Yokai.h"
#include <vector>
#include "MainPlayer.generated.h"

using namespace std;

UCLASS()
class MOMOTARO_API AMainPlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMainPlayer();

	// The currently selected Yokai
	AYokai* CurrentYokai;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void DrawCards(int NumOfCardsToDraw);

	UFUNCTION(BlueprintCallable)
	TArray<ACard*> GetHand();

};
