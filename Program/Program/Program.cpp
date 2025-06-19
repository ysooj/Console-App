#include <iostream>
#include "Circle.h"
#include "Marine.h"
#include "Ghost.h"
#include "Firebat.h"

using namespace std;

void Position(float x, float y, float z)
{
	cout << "float x : " << x << endl;
	cout << "float y : " << y << endl;
	cout << "float z : " << z << "\n" << endl;
}

void Position(int x, int y, int z)
{
	cout << "int x : " << x << endl;
	cout << "int y : " << y << endl;
	cout << "int z : " << z << "\n" << endl;
}

void Position(int x, int y)
{
	cout << "정수 x : " << x << endl;
	cout << "정수 y : " << y << "\n" << endl;
}

int main()
{
#pragma region 다형성
	// 여러 개의 서로 다른 객체가 동일한 기능을 서로 다른 방법으로 처리할 수 있는 기능입니다.

#pragma region 함수의 오버로딩
	// 같은 이름의 함수를 매개 변수의 자료형과 매개 변수의 수로 구분하여 여러 개를 선언할 수 있는 기능입니다.

	//	Position(1.5f, 5.7f, 7.9f);
	//	Position(0, 1, 2);
	//	Position(5, 7);

	// 함수의 오버로딩의 경우, 함수의 매개 변수에 전달하는 인수의 형태를 보고 호출하므로
	// 반환형으로 함수의 오버로딩을 생성할 수 없습니다.

	// C언어에는 오버로딩이 안 되고, C++부터 오버로딩이 지원된다.
#pragma endregion

#pragma region 함수의 오버라이딩
	// 상위 클래스에 있는 함수를 하위 클래스에서 재정의하여 사용하는 기능입니다.

	//	Shape shape;
	//	Circle circle;
	//	
	//	shape.Volume();
	//	circle.Volume();
	// 기본적으로 자식 클래스는 부모 클래스의 함수를 가져와서 쓸 수 있다.
	// 그러나 자식 클래스에서 오버라이딩을 하면 부모 클래스에서의 함수를 재정의,
	// 즉 다른 내용으로 쓸 수 있게 된다.

	// 함수의 오버라이딩은 하위 클래스에서 함수를 재정의할 때
	// 상위 클래스의 함수 형태와 일치해야 합니다.
#pragma endregion

#pragma region 가상 함수
	// 상속하는 클래스 내에서 같은 형태의 함수로 재정의 될 수 있는 함수입니다.
	Terran terran;
	
	Terran* pointer = new Marine();
	pointer->Stat();
	delete pointer;

	pointer = new Firebat();
	pointer->Stat();
	delete pointer;

	pointer = new Ghost();
	pointer->Stat();
	delete pointer;

	// 가상 함수는 실행 시간에 상위 클래스에 대한 참조로
	// 하위 클래스에 재정의된 함수를 호출할 수 있습니다.
#pragma endregion

	// 다형성은 컴파일 시점에 함수와 속성이 결정되는 정적 바인딩을 하지 않고,
	// 실행 시간(런타임 중)에 함수와 속성이 결정될 수 있는 동적 바인딩을 가능하게 합니다.


	// [c언어 컴파일 과정]
	// 전처리기
	// 컴파일을 통해 .obj라는 파일이 생성됨
	// Linking(이어주는 것)이 이루어진다. 링커 쪽에서 ... 영상 보자.
#pragma endregion

	return 0;
}