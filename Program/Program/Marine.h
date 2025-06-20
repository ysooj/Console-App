#pragma once
#include "Terran.h"

class Marine : public Terran
{
public:
	Marine();
	virtual void Stat() override;
	// 부모 클래스에서 virtual이라고 적어서 가상 함수로 지정해주면
	// 자식 클래스에는 virtual을 적어주지 않아도 되지만
	// 코드를 예쁘게 정리하고, 혹시나 함수의 기본 형태가 다를 경우를 대비하기 위해서는
	// 자식 클래스에도 virtual을 적어주는 것이 좋다.
	// 더 안전하게 코드를 사용하고 싶으면 override도 써줄 수 있다.
	virtual ~Marine();
};

