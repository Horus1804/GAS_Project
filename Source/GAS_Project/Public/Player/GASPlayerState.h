#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "GASPlayerState.generated.h"

UCLASS()
class GAS_PROJECT_API AGASPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

	public :
		AGASPlayerState();

		// Implement IAbilitySystemInterface
		virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

		// Implement IAbilitySystemInterface
		virtual class UAttributeSetBase* GetAttributeSetBase() const;

		UFUNCTION(BlueprintCallable, Category = "Player State")
		bool IsAlive() const;
};
