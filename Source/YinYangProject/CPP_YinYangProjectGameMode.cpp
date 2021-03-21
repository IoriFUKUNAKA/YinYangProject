// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_YinYangProjectGameMode.h"
#include "UObject/ConstructorHelpers.h"

ACPP_YinYangProjectGameMode::ACPP_YinYangProjectGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Workspace/IoriFUKUNAKA/Blueprints/Characters/Player/BP_Player"));
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/Workspace/IoriFUKUNAKA/Blueprints/Characters/Player/BP_PlayerController"));

	if(PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}