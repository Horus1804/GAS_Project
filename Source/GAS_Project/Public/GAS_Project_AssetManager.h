#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "GAS_Project_AssetManager.generated.h"

UCLASS()
class GAS_PROJECT_API UGAS_Project_AssetManager : public UAssetManager
{
	GENERATED_BODY()

public:
	virtual void StartInitialLoading() override;
};
