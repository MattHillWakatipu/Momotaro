// Fill out your copyright notice in the Description page of Project Settings.


#include "Yokai.h"
#include "Card.h"
#include "AinkusFury.h"
#include "AokijisMight.h"

// Sets default values
AYokai::AYokai()
{
	
	// Generate default deck of cards
	for (int i = 0; i < 5; i++) {
		AAinkusFury* NewCard = NewObject<AAinkusFury>();
		CardPile.Add(NewCard);
	}
	for (int i = 0; i < 5; i++) {
		AAokijisMight* NewCard = NewObject<AAokijisMight>();
		CardPile.Add(NewCard);
	}
	
}

// Called when the game starts or when spawned
void AYokai::BeginPlay()
{
	Super::BeginPlay();

}