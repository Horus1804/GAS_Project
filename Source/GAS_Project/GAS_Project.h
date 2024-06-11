#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EGASAbilityID : uint8
{
	None UMETA(DisplayName = "None"),
	Confirm UMETA(DisplayName = "Confirm"),
	Cancel UMETA(DisplayName = "Cancel"),
};
