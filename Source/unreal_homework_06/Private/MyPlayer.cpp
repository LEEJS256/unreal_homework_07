// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayer.h"
#include "Components/CapsuleComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "Engine/LocalPlayer.h"

// Sets default values
AMyPlayer::AMyPlayer()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	SetRootComponent(m_Capsule);
	m_Capsule->InitCapsuleSize(34.f, 88.f); //충돌크기

	m_SkeletonMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	m_SkeletonMesh->SetupAttachment(m_Capsule);
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(TEXT("/Game/Resources/Characters/Meshes/SKM_Manny_Simple.SKM_Manny_Simple"));
	if (MeshAsset.Succeeded())
	{
		m_SkeletonMesh->SetSkeletalMesh(MeshAsset.Object);
	}
	m_SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	m_SpringArm->SetupAttachment(m_Capsule);
	m_SpringArm->TargetArmLength = 300.f;
	bUseControllerRotationYaw = false;
	//m_SpringArm->bUsePawnControlRotation = ture;
	//기존에는 true였음
	m_SpringArm->bUsePawnControlRotation = false; 
	m_SpringArm->bInheritYaw = false;
	m_SpringArm->bInheritPitch = false;
	m_SpringArm->bInheritRoll = false;

	//SpringArm이 컨트롤러 회전을 따라게함

	m_Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	m_Camera->SetupAttachment(m_SpringArm, USpringArmComponent::SocketName);

	m_Capsule->SetNotifyRigidBodyCollision(true); // 충돌 감지 활성화

	m_Capsule->SetSimulatePhysics(false);
	m_SkeletonMesh->SetSimulatePhysics(false);
}

// Called when the game starts or when spawned
void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();

	if (APlayerController* pPlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* pSubsystem =
			ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(pPlayerController->GetLocalPlayer()))
		{
			pSubsystem->AddMappingContext(m_InputMapping, 0);
		}
	}

}

// Called every frame
void AMyPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* pEInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		pEInput->BindAction(m_MoveAction, ETriggerEvent::Triggered, this, &AMyPlayer::Move);
		pEInput->BindAction(m_LookAction, ETriggerEvent::Triggered, this, &AMyPlayer::Look);
		pEInput->BindAction(m_JumpAction, ETriggerEvent::Started , this, &AMyPlayer::Jump);
		pEInput->BindAction(m_JumpAction, ETriggerEvent::Completed, this, &AMyPlayer::StopJump);

	}

}

void AMyPlayer::Move(const FInputActionValue& Value)
{
	const FVector2D Input = Value.Get<FVector2D>();

	if (Controller && Input.SizeSquared() > 0.f)
	{
		// 컨트롤러 회전 가져오기 (Pitch는 0으로 고정해서 수평 이동만)
		FRotator ControlRot = Controller->GetControlRotation();
		ControlRot.Pitch = 0.f;

		// Forward, Right 벡터 계산
		const FVector Forward = FRotationMatrix(ControlRot).GetUnitAxis(EAxis::X);
		const FVector Right = FRotationMatrix(ControlRot).GetUnitAxis(EAxis::Y);

		FVector V_calc = (Forward * Input.Y + Right * Input.X) * m_MoveSpeed * GetWorld()->GetDeltaSeconds();
		AddActorWorldOffset(V_calc, true);

		//const FVector Forward	= GetActorForwardVector();
		//const FVector Right		= GetActorRightVector();

		//FVector V_calc = (Forward * Input.Y + Right * Input.X) * m_MoveSpeed * GetWorld()->GetDeltaSeconds();
		//AddActorLocalOffset(V_calc, true);
	}

}

void AMyPlayer::Look(const FInputActionValue& Value)
{
	//AddController Input 미사용
	const FVector2D Input = Value.Get<FVector2D>();

	float sensitivity = 1.5f;

	// 회전 누적 값 계산
	m_fYaw += Input.X * sensitivity;
	m_fPitch = FMath::Clamp(m_fPitch - Input.Y * sensitivity, -80.f, 80.f);


	if (m_SpringArm)
	{
		FRotator NewRotation = FRotator(m_fPitch, m_fYaw, 0.f);
		m_SpringArm->SetRelativeRotation(NewRotation);
		//m_SpringArm->SetRelativeRotation(FRotator(m_fPitch, 0.f, 0.f));
	}

	//기존코드
	//const FVector2D Input = Value.Get<FVector2D>();
	//AddControllerYawInput(Input.X);
	//AddControllerPitchInput(Input.Y);
}
void AMyPlayer::Jump()
{
	if (m_bIsJumping)
	{
		// 위쪽으로 힘을 가함
		FVector JumpVector = FVector(0.f, 0.f, m_JumpPower);
		m_Capsule->AddImpulse(JumpVector, NAME_None, true);
		m_bIsJumping = false;
	}
}
void AMyPlayer::StopJump()
{

	m_bIsJumping = true;
}

