#include "HS_Player.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

AHS_Player::AHS_Player()
{
	Tags.Add("Player");

	GetCapsuleComponent()->InitCapsuleSize(42.0f, 96.0f);

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	_springArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	_springArmComp->SetupAttachment(RootComponent);
	_springArmComp->SetUsingAbsoluteRotation(true);
	_springArmComp->TargetArmLength = 1200.f;
	_springArmComp->SetRelativeRotation(FRotator(-50.f, 0.f, 0.f));
	_springArmComp->bDoCollisionTest = false;

	_cameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));
	_cameraComp->SetupAttachment(_springArmComp, USpringArmComponent::SocketName);
	_cameraComp->bUsePawnControlRotation = false;

	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
}

void AHS_Player::PreInitializeComponents()
{
	Super::PreInitializeComponents();
}

void AHS_Player::PostInitializeComponents()
{
	Super::PostInitializeComponents();

}

void AHS_Player::BeginPlay()
{
	Super::BeginPlay();
}

float AHS_Player::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float damage = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);

	return damage;
}


