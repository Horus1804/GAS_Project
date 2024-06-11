#include "Character/Abilities/CharacterAbilitySystemComponent.h"

void UCharacterAbilitySystemComponent::ReceivedDamage(UCharacterAbilitySystemComponent* SourceASC,
	float UnmitigatedDamage, float MitigatedDamage)
{
	OnReceivedDamage.Broadcast(SourceASC, UnmitigatedDamage, MitigatedDamage);
}
