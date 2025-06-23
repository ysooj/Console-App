#include <iostream>
#include "Necklace.h"
#include "Brooch.h"

using namespace std;

int main()
{
#pragma region 추상화
	// 복잡한 시스템이나 객체의 내부의 세부사항은 숨기고,
	// 필요한 부분만을 외부에서 사용할 수 있게 단순화시키는 기능입니다.

	// 아래 두 개 중, 1번의 경우는 추상 클래스라서 안 되지만
	// 2번의 경우는 포인터기 때문에 추상 클래스 여부와는 상관없이 가능한 것이다.
	// Accessory accessory;		// 1번
	//	Accessory * pointer;	// 2번
	//	
	//	pointer = new Brooch;
	//	
	//	pointer->Effect();
	//	
	//	delete pointer;
	//	
	//	pointer = new Necklace;
	//	
	//	pointer->Effect();
	//	
	//	delete pointer;

	// 추상 클래스는 정의되어 있지 않은 함수가 있으므로, 객체를 생성할 수 없습니다.

	Accessory * list[4];

	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
		{
			list[i] = new Necklace;

			list[i]->Effect();
		}
		
		else
		{
			list[i] = new Brooch;

			list[i]->Effect();
		}
	}

	for (int i = 0; i < 4; i++)
	{
		delete list[i];
	}
#pragma endregion

	return 0;
}

// IT 쪽 : 정보처리기사
// 게임 쪽 : 게임 프로그래밍 전문가, 유니티? (레벨 ; 어소시애이트 등)