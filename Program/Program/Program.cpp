#include <iostream>
#include "Packet.h"

using namespace std;

int main()
{
#pragma region 스마트 포인터
	// 포인터를 사용하는 동시에, 자동으로 메모리 관리를 해주며
	// 경계 확인과 같은 추가 기능을 제공하는 포인터입니다.
	
	// [그냥 포인터]
	//	int * ptr2 = nullptr;
	//	
	//	//	[내 버전]
	//	//	{
	//	//		int* ptr1 = new int(100);
	//	//		ptr2 = ptr1;
	//	//	}
	//	
	//	// [강사님 버전]
	//	{
	//		int* ptr1 = new int;
	//		ptr2 = ptr1;
	//	}
	//	
	//	*ptr2 = 100;
	//	
	//	cout << "ptr2가 가리키는 값 : " << *ptr2 << endl;
	//	
	//	delete ptr2;

#pragma region unique pointer
	// 특정한 객체를 하나의 스마트 포인터만 가리킬 수 있도록 되어있는 포인터입니다.

	unique_ptr<Packet> uniquePointer = make_unique<Packet>();
	
	uniquePointer->Call();
	// (*uniquePointer).Call();
	// 위 두 개는 같은 의미다.

#pragma endregion

#pragma endregion

	return 0;
}