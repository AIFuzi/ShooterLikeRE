#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BasePlayerCharacter.generated.h"

UCLASS()
class FIGHTINGGAME_API ABasePlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	ABasePlayerCharacter();
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Player")
	class USpringArmComponent* SpringArm;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Player")
	class UCameraComponent* PlayerCamera;
};
