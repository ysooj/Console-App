#pragma once
#include <iostream>

using namespace std;

class Terran
{
protected:
	int health;
	int defense;
public:
	Terran();

	// ���� �Լ��� �� �� �̻��� ���� �Լ��� �����ϴ� Ŭ������ ���� ��
	// ��ü �ּҿ� ���� �Լ� ���̺��� �߰��մϴ�.
	virtual void Stat();
	virtual ~Terran();
};

