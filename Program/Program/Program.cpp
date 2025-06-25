#include <iostream>

using namespace std;

template <typename T>
bool Same(T left, T right)
{
	// 확실하게 하고 싶으면 강제로 자료형을 bool로 잡아주는 형변환을 넣어준다. => (bool)
	return (bool)(left == right);
}

// 문자열 자료형은 char가 아니고, const char * 이다.
bool Same(const char * left, const char *  right)
{
	// strlen() : 문자열의 길이를 구하는 함수
	return strlen(left) == strlen(right);
}

template <typename T>
class Container
{
private:
	int index;
	T list[5];
public:
	Container()
	{
		index = 0;

		for (int i = 0; i < 5; i++)
		{
			list[i] = NULL;
		}
	}
	void Push()
	{

	}
};

int main()
{
#pragma region 템플릿
	// 데이터 형식에 의존하지 않고, 하나의 값이 여러 다른 데이터 형식을 가질 수 있는 기술에 중점을 두어
	// 재사용성을 높일 수 있는 기능입니다.

	//	cout << "(1은 true, 0은 false)\n" << endl;
	//	
	//	cout << "결과 : " << Same('A', 'A') << endl;
	//	cout << "결과 : " << Same(10, 10) << endl;
	//	cout << "결과 : " << Same(15.75f, 6.25f) << endl;
	//	cout << "결과 : " << Same(10.125, 15.375) << endl;

	// 오버로딩보다는 템플릿을 쓰는 게 더 간단하다.
	// 그러면 오버로딩은 언제 쓰는 게 좋을까?
	// 매개 변수가 여러 개일 때, 오버로딩을 쓰면 좋다.
#pragma endregion

#pragma region 템플릿 특수화
	// 특정 자료형에 대해 다르게 처리하고 싶은 경우
	// 특정한 자료형만 다른 형식으로 동작시키는 기능입니다.

	//	cout << Same("abc", "efg") << endl;
	//	cout << Same("abc", "abcd") << endl;
	//	cout << Same("League", "Legend") << endl;
	//	cout << Same("School", "Teacher") << endl;
#pragma endregion

	Container<int> container;
	Container<float> floatainer;
	Container<char> chartainer;

	container.list

	for (int i = 0; i < 5; i++)
	{
		cout << [i] << endl;

	}

	return 0;
}