#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
#pragma region 선형 컨테이너
	// 데이터를 선형으로 저장하며, 특별한 제약이나 규칙이 없는 컨테이너입니다.

#pragma region vector container
	
	//	std::vector<int> vector;
	//	
	//	// 메모리 파편화 현상을 방지하기 위해 reserve로 처음부터 capacity를 정해줄 수 있다.
	//	// 아래는 8로 capacity를 처음에 정해준 것이다.
	//	vector.reserve(8);
	//	
	//	vector.push_back(10);
	//	vector.push_back(20);
	//	vector.push_back(30);
	//	vector.push_back(40);
	//	vector.push_back(50);
	//	
	//	vector.pop_back();
	//	
	//	for (int i = 0; i < vector.size(); i++)
	//	{
	//		//	cout << "vector[" << i << "] : " << vector[i] << endl;
	//		cout << vector[i] << endl;
	//	}
	//	
	//	cout << "vector의 size : " << vector.size() << endl;
	//	cout << "vector의 capacity : " << vector.capacity() << endl;
	//	
	//	// vector는 중간에 데이터를 넣거나 삭제하는 일이 빈번한 경우에는
	//	// 사용하는 것을 추천하지 않는다. 사용하면 비효율적이라고 할 수 있다.
	//	// vector 대신 나중에 쓸 큐? 데크?을 쓰는 게 좋다.
	//	
	//	vector.clear();
	//	// 이를 통해 vector 안의 모든 원소들은 지워지지만,
	//	// capacity는 나중에 쓸 수도 있으니까 그냥 놔둔다.
	//	// (필요없을 것 같아서 해제했는데, 또 쓰게 되면 또 할당 다시 해야 하니까)
	//	
	//	cout << "vector의 size : " << vector.size() << endl;
	//	cout << "vector의 capacity : " << vector.capacity() << endl;
#pragma endregion

#pragma region list container
	std::list<int> list = {20};

	list.push_back(30);
	for (int element : list)
	{
		cout << "list contents: " << element << endl;
	}
	cout << "list : " << list.size() << endl;

	list.push_front(10);
	for (int element : list)
	{
		cout << "list contents: " << element << endl;
	}
	cout << "list : " << list.size() << endl;

	list.pop_front();
	for (int element : list)
	{
		cout << "list contents: " << element << endl;
	}
	cout << "list : " << list.size() << endl;
#pragma endregion


#pragma endregion


	return 0;
}