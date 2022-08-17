// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HS_Player.generated.h"

/**
 *
 */
UCLASS()
class HYPERSLAUTER_UE5_API AHS_Player : public ACharacter
{
	GENERATED_BODY()

public:
	AHS_Player();

protected:
	virtual void PreInitializeComponents() override;
	virtual void PostInitializeComponents() override;
	virtual void BeginPlay() override;

	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

public:
	FORCEINLINE class UCameraComponent* GetCameraComp() const { return _cameraComp; }
	FORCEINLINE class USpringArmComponent* GetSpringArmComp() const { return _springArmComp; }

private:
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* _cameraComp;

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* _springArmComp;



};
