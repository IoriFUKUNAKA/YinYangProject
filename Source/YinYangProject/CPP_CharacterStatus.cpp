// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_CharacterStatus.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
CPP_CharacterStatus::CPP_CharacterStatus()
{
}

/// <summary>
/// �f�X�g���N�^
/// </summary>
CPP_CharacterStatus::~CPP_CharacterStatus()
{
}

/// <summary>
/// �X�e�[�^�X�󋵂̍X�V
/// </summary>
UFUNCTION(BlueprintImplementableEvent)
void CPP_CharacterStatus::UpdateStatus(float _DeltaTime)
{
	// �������Ԃ��ݒ肳��ĂȂ���Ώ������Ȃ�
	if (m_LifeTime == 0) return;

	// ����ł��Ȃ���Όo�ߎ��Ԃ����Z
	if(!IsDead())
	{
		m_Elapsed += _DeltaTime;
	}
}

/// <summary>
/// �������m���߂�
/// </summary>
UFUNCTION(BlueprintImplementableEvent)
bool CPP_CharacterStatus::IsDead()
{
	return m_Elapsed >= m_LifeTime;
}