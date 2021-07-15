// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpringArmComponent.h"
#include "CPP_CustomSpringArmComponent.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, meta = (BlueprintSpawnableComponent))
class YINYANGPROJECT_API UCPP_CustomSpringArmComponent : public USpringArmComponent
{
	GENERATED_BODY()

    public:
    UFUNCTION()
    void SetTargetArmLength(float _Length) { TargetArmLength = _Length; }

    UFUNCTION()        
        void SetSocketOffset(FVector _Offset) { SocketOffset = _Offset; }

    UFUNCTION()
    void SetUsePawnControlRotation(bool _Value) { bUsePawnControlRotation = _Value; }
};