#pragma once
#include "Terran.h"

class Marine : public Terran
{
public:
	Marine();
	virtual void Stat() override;
	// �θ� Ŭ�������� virtual�̶�� ��� ���� �Լ��� �������ָ�
	// �ڽ� Ŭ�������� virtual�� �������� �ʾƵ� ������
	// �ڵ带 ���ڰ� �����ϰ�, Ȥ�ó� �Լ��� �⺻ ���°� �ٸ� ��츦 ����ϱ� ���ؼ���
	// �ڽ� Ŭ�������� virtual�� �����ִ� ���� ����.
	// �� �����ϰ� �ڵ带 ����ϰ� ������ override�� ���� �� �ִ�.
	virtual ~Marine();
};

