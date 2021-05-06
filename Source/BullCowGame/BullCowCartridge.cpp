// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Welcome to Bull and Cows game!!"));
    PrintLine(TEXT("Guess the 4 characters word"));
    PrintLine(TEXT("Press [ENTER] key"));
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();

    FString HiddenWord = TEXT("cake");

    if (Input == HiddenWord)
    {
        PrintLine(TEXT("You found it!"));
        PrintLine(HiddenWord);
    } 
    else 
    {
        PrintLine(TEXT("You LOST"));
    }
    
}