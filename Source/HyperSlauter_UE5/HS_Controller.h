// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "HS_Controller.generated.h"

/**
 * 
 */
UCLASS()
class HYPERSLAUTER_UE5_API AHS_Controller : public APlayerController
{
	GENERATED_BODY()

public:
	AHS_Controller();

private:
	bool _isMoveInput;
	bool _isAttackInput;

	float _moveDistance;
	float _followTime;

	UPROPERTY()
	class AHS_Player* _gameOwner;

protected:
	virtual void BeginPlayingState() override;
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;

public:
	void OnMoveInputPressed();
	void OnMoveInputReleased();

	void OnAttackInputPressed();
	void OnAttackInputReleased();

private:
	bool MoveCheck();
	void MoveToMouseCursor();
	void MoveProcess(FVector MovePos);
	
	void SetOwnerTransform(FVector MovePos);

	void AttackCheck();
	void AttackToMouseCursor();
	void AttackProcess(FVector AttackPos);

};
