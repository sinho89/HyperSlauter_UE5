// Fill out your copyright notice in the Description page of Project Settings.


#include "HS_AnimInstance.h"
#include "HS_Player.h"

UHS_AnimInstance::UHS_AnimInstance()
{

}

void UHS_AnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	_gameOwner = Cast<AHS_Player>(TryGetPawnOwner());
}

void UHS_AnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (IsValid(_gameOwner))
	{
		

	}
}
