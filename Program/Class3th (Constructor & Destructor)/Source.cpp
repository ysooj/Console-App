#include <iostream>

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

class Item
{
private:
	int* price = nullptr;
public:
	Item(int value)
	{
		if (price == nullptr)
		{
			price = new int;
		}

		*price = value;
	}

	Item(const Item& clone)
	{
		price = new int;
		*price = *clone.price;
	}

	~Item()
	{
		delete price;
	}

	void CheckPrice()
	{
		cout << "가격 : " << *price << endl;
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

	//	Card card;
	//	
	//	card.Profile('A', "Diamond");
	//	
	//	// cloneCard에 card를 복사한다.
	//	Card cloneCard(card);
	//	
	//	card.Stat();
	//	cloneCard.Stat();

	// 복사 생성자를 정의하지 않고 객체를 복사하게 되면,
	// 기본 복사 생성자가 호출되기 때문에, 얕은 복사로 객체를 복사하게 됩니다.
#pragma endregion

#pragma region 얕은 복사
	// 객체를 복사할 때, 주소 값을 복사하여
	// 같은 메모리 공간을 가리키게 하는 복사입니다.

	// 프리미티브 타입 : 기본 타입. int, char, float 등
	// 아래의 예제는 동적 할당을 통해 Heap이라는 메모리 공간에 포인터를 저장하여 같은 메모리 공간을 가리키게 했다.
	//	int * pointer = new int;
	//	int * reference = pointer;
	//	
	//	*pointer = 100;
	//	
	//	cout << "pointer의 값 : " << pointer << endl;
	//	cout << "reference의 값 : " << reference << endl;
	//	
	//	cout << "pointer가 가리키는 값 : " << *pointer << endl;
	//	cout << "reference가 가리키는 값 : " << *reference << endl;
	//	
	//	delete pointer;

	// 얕은 복사의 경우, 같은 객체가 서로 같은 메모리 공간을 참조하고 있기 때문에
	// 하나의 객체로 값을 변경하게 되면, 서로 참조된 객체도 함께 영향을 받습니다.

	// [어떨 때 쓰면 좋을까??]
	// 맵의 나무 오브젝트 같은 걸, 크리스마스 이벤트같은 때 눈을 덮은 효과를 줄 때
	// 본체(?)만 수정하면 나머지 모두 바로 수정되니 유지 보수에 효율적이다.
#pragma endregion

#pragma region 깊은 복사
	// 객체를 복사할 때, 참조 값이 아닌
	// 객체 자체로 새로 복사하여 서로 다른 메모리를 생성하는 복사입니다.

	Item part(10000);

	Item clone(part);
	// Item clone = part;
	// 위 둘은 C언어에서 같은 의미다.

	part.CheckPrice();
	clone.CheckPrice();
#pragma endregion

	return 0;
}