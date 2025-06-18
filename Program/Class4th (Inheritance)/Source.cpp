#include <iostream>
#include "../Program/Potion.h"
// 부모 클래스의 헤더 파일은 가져올 필요가 없다.
// 우리는 지금 자식 클래스의 헤더 파일에 부모 클래스를 포함하고 있기 때문이다.

// [헤더(.h)는 선언. 변수 이름이나 함수 이름을 선언하는 것.]
// 	int health;
//	Consumable();

// [.cpp는 정의. 값을 넣어주는 것.]
//	health = 100;
//	Consumable() {}

using namespace std;

int main()
{
#pragma region 상속
	// 상위 클래스의 속성을 하위 클래스가 사용할 수 있도록 설정해주는 기능입니다.

	Consumable consumable;

	Potion potion;

	cout << "Consumable의 크기 : " << sizeof(Consumable) << endl;
	cout << "Potion의 크기 : " << sizeof(Potion) << endl;
	// 부모 클래스는 포인터로 8byte, 자식 클래스가 int 자료형이므로 4byte로 자식 클래스는 부모 클래스의 메모리가 더해지니까 12byte가 나올거라고 예상하지만,
	// 바이트 패딩으로 인해 가장 큰 자료형의 크기인 8byte로 맞춰져서 자식 클래스의 크기는 (부모 클래스 8byte + (자식 클래스 4byte + 바이트패딩 4byte)인 16byte가 나오게 된다.
	// 즉, 바이트 패딩으로 부모 클래스 8byte에 맞춰져야 하므로 (자식 클래스 4byte + 바이트패딩 4byte = 8byte)가 되는 것이다.

	// 클래스의 상속 관계에서 상위 클래스는 하위 클래스의 속성을 사용할 수 없으며
	// 하위 클래스는 상위 클래스의 메모리가 포함된 상태로 메모리의 크기가 결정됩니다.
#pragma endregion

	return 0;
}