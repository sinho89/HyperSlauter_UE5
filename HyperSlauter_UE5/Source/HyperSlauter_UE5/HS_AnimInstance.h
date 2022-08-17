// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "HS_AnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class HYPERSLAUTER_UE5_API UHS_AnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UHS_AnimInstance();

	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

private:
	UPROPERTY()
	class AHS_Player* _gameOwner;
	
	
};
