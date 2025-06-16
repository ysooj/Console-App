﻿#include <iostream>

// 이걸 사용하면 이제 std를 적지 않고 cout과 cin, endl 등을 사용할 수 있다.
// 즉 std::cout이 아니라 그냥 cout이라고만 적어도 된다.
using namespace std;

namespace Germany
{
	float area = 45789.2f;

	void Size()
	{
		cout << "area : " << area << "km" << endl;
	}
}

namespace Brazil
{
	float area = 57861.5f;

	void Size()
	{
		cout << "area : " << area << "km" << endl;
	}
}

using namespace Brazil;

class GameObject
{
#pragma region 접근 지정자
	// 클래스 내부에 포함돼있는 속성에 접근 범위를 제한하는 지정자입니다.
	// 접근 지정자가 없는 경우에는 기본 접근 지정자인 private로 지정된다.

	// public : 클래스 내부와 자기가 상속하고 있는 클래스
	//			그리고 클래스 외부에서도 접근을 허용하는 지정자입니다.

	// protected : 클래스 내부와 자기가 상속하고 있는 클래스까지만 접근을 허용하는 지정자입니다.

	// private : 클래스 내부까지만 접근을 허용하는 지정자입니다.
#pragma endregion

private:
	int x = 1;
	int y = 2;
	int z = 3;
protected:
	const char* name = "Capsule";
public:
	void Position()
	{
		cout << "x : " << x << endl;
		cout << "y : " << y << endl;
		cout << "z : " << z << endl;
	}
};

void Profile(const char* name = "James", int age = 20)
{
	cout << "Name : " << name << endl;
	cout << "Age : " << age << endl;
}

int main()
{
#pragma region 이름 공간
	// 속성을 구분할 수 있도록 유효 범위를 설정하는 영역입니다.

	Size();
	Germany::Size();

#pragma endregion

#pragma region 클래스
	// 사용자 정의 데이터 유형으로
	// 속성과 함수가 포함되어 있으며,
	// 클래스를 통해 객체를 생성하여 접근하고 사용하는 집합체입니다.

	// 아래는 객체를 인스턴스 시킨 것...? 객체가 인스턴스 아닌가..?
	//	GameObject gameObject;
	//	
	//	gameObject.Position();
	//	
	//	cout << "GameObject의 크기 : " << sizeof(GameObject) << endl;

	// 클래스의 경우, 클래스 내부에 있는 변수는 클래스의 메모리 영역에 포함되지만
	// 정적 변수와 함수의 메모리는 클래스 영역에 포함되지 않습니다.

	// Setter는 주로 우리가 데이터를 설정할 때 쓰는 함수 이름으로 쓰고,
	// Getter는 주로 우리가 데이터를 가져올 때 쓰는 함수 이름으로 쓴다.
#pragma endregion

#pragma region 기본 매개 변수
	// 함수의 매개 변수에 값이 전달되지 않을 때
	// 미리 값을 설정해놓는 매개 변수입니다.

	// Profile();
	// Profile("Jones", 25);

	// 기본 매개 변수를 지정하려면
	// 오른쪽에서부터 값을 지정해주어야 합니다.
#pragma endregion

	return 0;
}