#include "HS_Controller.h"
#include "HS_Player.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"

AHS_Controller::AHS_Controller()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;

	_isMoveInput = false;
	_isAttackInput = false;

	_moveDistance = 0.f;
	_followTime = 0.f;
}

void AHS_Controller::BeginPlayingState()
{
	Super::BeginPlayingState();

	_gameOwner = Cast<AHS_Player>(GetPawn());
}

void AHS_Controller::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	if (MoveCheck())
		_followTime += DeltaTime;
	else
		_followTime = 0.f;
}

void AHS_Controller::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("OnMoveInput", IE_Pressed, this, &AHS_Controller::OnMoveInputPressed);
	InputComponent->BindAction("OnMoveInput", IE_Released, this, &AHS_Controller::OnMoveInputReleased);

	InputComponent->BindAction("OnAttackInput", IE_Pressed, this, &AHS_Controller::OnAttackInputPressed);
	InputComponent->BindAction("OnAttackInput", IE_Released, this, &AHS_Controller::OnAttackInputReleased);
}

void AHS_Controller::OnMoveInputPressed()
{
	_isMoveInput = true;
	StopMovement();
}

void AHS_Controller::OnMoveInputReleased()
{
	_isMoveInput = false;
}

void AHS_Controller::OnAttackInputPressed()
{
	_isAttackInput = true;
}

void AHS_Controller::OnAttackInputReleased()
{
	_isAttackInput = false;
}

bool AHS_Controller::MoveCheck()
{
	if (_isMoveInput)
		MoveToMouseCursor();

	return _isMoveInput;
}

void AHS_Controller::MoveToMouseCursor()
{
	FHitResult mouseHit;
	GetHitResultUnderCursor(ECC_Visibility, true, mouseHit);

	FVector movePos = mouseHit.ImpactPoint;

	SetOwnerTransform(movePos);

	/*if (mouseHit.bBlockingHit)
		MoveProcess(movePos);*/
}

void AHS_Controller::MoveProcess(FVector MovePos)
{
	float Distance = FVector::Dist(MovePos, GetPawn()->GetActorLocation());

	if (Distance > _moveDistance)
	{
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, MovePos);
	}

}

void AHS_Controller::SetOwnerTransform(FVector MovePos)
{
	if (_gameOwner)
	{
		FVector worldDirection = (MovePos - _gameOwner->GetActorLocation()).GetSafeNormal();
		_gameOwner->AddMovementInput(worldDirection, 1.f, false);
	}
}

void AHS_Controller::AttackCheck()
{
}

