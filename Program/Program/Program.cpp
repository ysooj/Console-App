#include <iostream>

using namespace std;

int main()
{
	int list[5] = {10, 20, 30, 40, 50};

	// &를 넣지 않으면 복사 비용이 발생하므로
	// &를 넣어줌으로써 바로 참조하게 하여 복사 비용을 줄일 수 있다.
	// 그리고 const를 씀으로써 element를 for문 안에서 수정할 수 없게 하면
	// 가장 안전한 코드가 된다.
	for (const int & element : list)
	{
		// const를 통해 값을 바꿀 수 없게 해주었다.
		//	element = 99;
		cout << "index : " << element << endl;
	}

	return 0;
}