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
	EStatusType m_Type; // �X�e�[�^�X�̎��

	float m_EffectValue;// ���ʗ�

	float m_LifeTime;	// ��������
	float m_Elapsed;	// �o�ߎ���
};
