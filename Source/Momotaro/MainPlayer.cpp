// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayer.h"
#include "Yokai.h"

// Sets default values
AMainPlayer::AMainPlayer()
{
	
}

// Called when the game starts or when spawned
void AMainPlayer::BeginPlay()
{
	Super::BeginPlay();
	AYokai* Dog = NewObject<AYokai>();
	CurrentYokai = Dog;

}

// Called to bind functionality to input
void AMainPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMainPlayer::DrawCards(int NumOfCardsToDraw)
{

	AYokai* Dog = NewObject<AYokai>();

	srand(time(0));
	for (int i = 0; i < NumOfCardsToDraw; i++) {
		int randNum = rand() % (CurrentYokai->CardPile.Num());
		CurrentYokai->Hand.Add(CurrentYokai->CardPile[0]);
		CurrentYokai->CardPile.RemoveAt(randNum);
	}
}

TArray<ACard*> AMainPlayer::GetHand()
{
	return CurrentYokai->Hand;
}