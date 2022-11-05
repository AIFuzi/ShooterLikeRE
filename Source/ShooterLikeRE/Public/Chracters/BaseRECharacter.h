#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseRECharacter.generated.h"

UCLASS()
class SHOOTERLIKERE_API ABaseRECharacter : public ACharacter
{
	GENERATED_BODY()

public:

	ABaseRECharacter();

protected:

	virtual void BeginPlay() override;

public:	

	// virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
