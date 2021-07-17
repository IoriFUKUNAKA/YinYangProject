// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EStatusType : uint8
{
	Attack,
	Defence,
	Speed,
	Regeneration,
};

/**
 * 
 */

class YINYANGPROJECT_API CPP_CharacterStatus
{
	public:
	CPP_CharacterStatus();
	~CPP_CharacterStatus();

	void UpdateStatus(float _DeltaTime);
	bool IsDead();

	private:
	EStatusType m_Type; // ステータスの種類

	float m_EffectValue;// 効果量

	float m_LifeTime;	// 生存時間
	float m_Elapsed;	// 経過時間
};
