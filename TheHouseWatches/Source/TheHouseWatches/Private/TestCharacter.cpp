// MyCharacter.cpp
#include "TestCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

ATestCharacter::ATestCharacter()
{
    // Set this character to call Tick() every frame
    PrimaryActorTick.bCanEverTick = true;
}

void ATestCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    // Bind movement input
    PlayerInputComponent->BindAxis("MoveForward", this, &ATestCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ATestCharacter::MoveRight);
}

void ATestCharacter::MoveForward(float Value)
{
    if (Controller && Value != 0.0f)
    {
        // Get forward vector
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        AddMovementInput(Direction, Value);
    }
}

void ATestCharacter::MoveRight(float Value)
{
    if (Controller && Value != 0.0f)
    {
        // Get right vector
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
        AddMovementInput(Direction, Value);
    }
}
