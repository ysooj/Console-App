#pragma once

#include <iostream>

using namespace std;

class Resource
{
private:
	shared_ptr<Resource> sharedPointer;
public:
	Resource();
	// 값을 변경할 수 없게 const를 넣고, 복사 비용을 줄이기 위해 &를 넣어준다.
	void Share(const shared_ptr<Resource> & pointer);
	~Resource();
};