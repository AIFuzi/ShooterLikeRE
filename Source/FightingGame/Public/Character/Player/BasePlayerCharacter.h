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

protected:

	virtual void BeginPlay() override;

public:
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Player")
	class USpringArmComponent* SpringArm;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Player")
	class UCameraComponent* PlayerCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement")
	float WalkingSpeed;

private:

	void MoveRight(float Val);

};



