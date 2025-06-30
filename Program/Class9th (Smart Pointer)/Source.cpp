#include <iostream>
#include "../Program/Packet.h"
#include "../Program/Resource.h"
#include "../Program/Character.h"

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

	// <> 안에는 자료형을 넣어주면 된다.
	//	unique_ptr<Packet> uniquePointer = make_unique<Packet>();
	//	
	//	cout << "Error Code : " << uniquePointer->Error() << endl;
	//	// uniquePointer->Error();
	//	// (*uniquePointer).Call();
	//	// 참고로 위 두 개는 같은 의미다.
	//	
	//  // 1번의 경우에는 컴파일 에러가 뜬다. unique 포인터는 하나의 객체를 하나의 포인터만 가리킬 수 있기 때문.
	//	// 1번 : unique_ptr<Packet> uniqueReferencePointer = uniquePointer
	//	unique_ptr<Packet> uniqueReferencePointer = std::move(uniquePointer);
	//	// std::move()로 소유권을 넘겨줄 수 있다.
	//	
	//	cout << "Error Code : " << uniqueReferencePointer->Error() << endl;

#pragma endregion

#pragma region shared pointer
	// 하나의 자원 객체를 여러 포인터 객체가 가리킬 수 있으며,
	// 모든 포인터 객체가 자원 객체를 필요하지 않을 때
	// 자원 객체를 해제하도록 설계되어있는 포인터입니다.

	//	// shared는 unique와 달리 <> 안에 자료형이 아닌 클래스(객체)를 넣어주어야 한다.
	//	shared_ptr<Resource> oil = make_shared<Resource>();
	//	
	//	// {}가 끝나면 스마트 포인터는 해제되기 때문에 아래의 경우 mineral은 {} 이후 사라지게 되므로
	//	// use_count는 {} 안에서는 2지만, {} 이후에는 1이 되는 것이다.
	//	{
	//		shared_ptr<Resource> mineral = oil;
	//	
	//		cout << "oil Reference Count : " << oil.use_count() << endl;
	//	}
	//	
	//	cout << "oil Reference Count : " << oil.use_count() << endl;


	//  서로서로 참조하는 순환 구조로 만들어보자.
	//	shared_ptr<Resource> oil = make_shared<Resource>();
	//	shared_ptr<Resource> mineral = oil;
	//	
	//	cout << "oil Reference Count : " << oil.use_count() << endl;
	//	cout << "oil Reference Count : " << oil.use_count() << endl;
	//	
	//	oil->Share(mineral);
	//	mineral->Share(oil);
#pragma endregion

#pragma region weak pointer
	// 자원 객체를 소유하지 않기 때문에 공유 포인터로 관리되는 자원 객체를 가리켜서
	// 참조 개수에 영향을 미치지 않게 하는 포인터입니다.

	//	shared_ptr<Character> warrior = make_shared<Character>();
	//	shared_ptr<Character> wizard = make_shared<Character>();
	//	
	//	warrior->Partner(wizard);
	//	wizard->Partner(warrior);
	//	
	//	cout << "warrior Reference Count : " << warrior.use_count() << endl;
	//	cout << "wizard Reference Count : " << wizard.use_count() << endl;
#pragma endregion

#pragma endregion

	return 0;
}