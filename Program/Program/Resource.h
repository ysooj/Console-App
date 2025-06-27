#pragma once

#include <iostream>

using namespace std;

class Resource
{
private:
	shared_ptr<Resource> sharedPointer;
public:
	Resource();
	// ���� ������ �� ���� const�� �ְ�, ���� ����� ���̱� ���� &�� �־��ش�.
	void Share(const shared_ptr<Resource> & pointer);
	~Resource();
};