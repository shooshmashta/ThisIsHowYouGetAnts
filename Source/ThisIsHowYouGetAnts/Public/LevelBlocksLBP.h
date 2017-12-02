// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "LevelBlocksLBP.generated.h"

/**
 * 
 */
UCLASS()
class THISISHOWYOUGETANTS_API ALevelBlocksLBP : public ALevelScriptActor
{
	GENERATED_BODY()
	

		/** A Custom name for each Level, specified in Level BP Default Properties! */
		UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = LevelBlock)
		FName LevelBlockName;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = SolusLevel)
		TArray<FString> levelNames;

	//OVERRIDES
protected:

	virtual void PreInitializeComponents() override;
	
};
