﻿#include <iostream>

using namespace std;

class Unit
{
private:
	static int count;
public:
	Unit()
	{
		cout << "Created Unit" << endl;
	};

	~Unit()
	{
		count++;

		cout << "count : " << count << endl;
	}
};

int Unit::count = 0;

class Card
{
private:
	char grade;
	const char* name;

public:
	Card() = default;

	Card(const Card& clone)
	{
		grade = clone.grade;
		name = clone.name;
	}

	void Profile(char grade, const char* name)
	{
		// this : 자기 자신을 가리키는 포인터 변수
		this->grade = grade;
		this->name = name;
	}

	void Stat()
	{
		cout << "Grade : " << grade << endl;
		cout << "Name : " << name << endl;
	}
};

int main()
{
#pragma region 생성자
	// 클래스의 인스턴스가 생성되는 시점에서 자동으로 호출되는 특수한 멤버 함수입니다.

	// Unit unit;

	// 생성자의 경우, 객체가 생성될 때 단 한 번만 호출되며
	// 생성자는 반환형이 존재하지 않기 때문에
	// 생성자가 호출되기 전에는 객체에 대한 메모리가 할당되지 않습니다.
#pragma endregion

#pragma region 소멸자
	// 객체가 소멸될 때, 자동으로 실행되는 클래스의 멤버 함수입니다.

	// Unit marine;

	// 소멸자는 객체가 메모리에서 해제될 때, 단 한 번만 호출되며
	// 소멸자에는 매개 변수를 생성하여 사용할 수 없습니다.

	// 프로그램이 종료되도 메모리에서 해제되지 않으면 소멸자는 호출되지 않는다.
	// 원래는 Stack 메모리 공간에 class가 올라가있어서, main 함수가 끝나면 메모리가 해제되기 때문에
	// main 함수가 끝나면 소멸자가 자동으로 호출됐다.
	
	// 그러나 포인터를 만들어서 동적 할당을 통해 Stack에서 Heap 메모리 공간으로 넣고 delete하지 않으면
	// 객체는 소멸되지 않고 계속 Heap에 남아있으므로 소멸자가 호출되지 않는다.
	//	Unit * pointer = new Unit;

	// 아래처럼 delete를 하면 소멸자가 호출되게 된다.
	//	delete pointer;

	//	Unit * marine = new Unit;
	//	
	//	Unit * firebat = new Unit;
	//	
	//	delete marine;
	//	delete firebat;
#pragma endregion

#pragma region 복사 생성자
	// 같은 객체를 복사하여 생성시킬 때 호출되는 생성자입니다.

	Card card;

	card.Profile('A', "Diamond");

	// cloneCard에 card를 복사한다.
	Card cloneCard(card);

	card.Stat();
	cloneCard.Stat();

	// 복사 생성자를 정의하지 않고 객체를 복사하게 되면,
	// 기본 복사 생성자가 호출되기 때문에, 얕은 복사로 객체를 복사하게 됩니다.
#pragma endregion

	return 0;
}