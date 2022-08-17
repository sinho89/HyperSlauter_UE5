// Copyright Epic Games, Inc. All Rights Reserved.


#include "HyperSlauter_UE5GameModeBase.h"
#include "HS_Controller.h"
#include "HS_Player.h"

AHyperSlauter_UE5GameModeBase::AHyperSlauter_UE5GameModeBase()
{
	PlayerControllerClass = AHS_Controller::StaticClass();

	static ConstructorHelpers::FClassFinder<ACharacter> BP_Player(TEXT("Blueprint'/Game/BluePrints/BP_Player.BP_Player_C'"));

	if (BP_Player.Succeeded())
		DefaultPawnClass = BP_Player.Class;
}
