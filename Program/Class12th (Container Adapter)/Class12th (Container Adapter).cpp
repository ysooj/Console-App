#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
#pragma region 컨테이너 어댑터
	// 기존 컨테이너의 인터페이스를 제한하여 만든 기능이
	// 제한되거나 변경된 컨테이너입니다.

#pragma region stack container
	// stack -> Last in First out. 나중에 들어온 게 먼저 나간다.

	// 아래처럼 ,를 찍어보면 기본적으로 내부 구조는 deque로 지정돼있음을 확인할 수 있다.
	// std::stack<int,> stack;
	//	std::stack<int> stack;
	//	
	//	stack.push(10);
	//	stack.push(20);
	//	stack.push(30);
	//	stack.push(40);
	//	stack.push(50);
	//	
	//	// if (int i = 0; i < stack.size(); i++)
	//	// if문으로 하지 못하는 이유는 stack.pop()으로 인해서 stack.size() 값이 for문을 돌 때마다 계속 바뀌기 때문.
	//	while (stack.empty() == false)
	//	{
	//		cout << "stack의 가장 마지막에 들어온 값 먼저 출력 : " << stack.top() << endl;
	//		stack.pop();
	//	}
#pragma endregion

#pragma region queue container
	// First in First out. 먼저 들어온 게 먼저 나간다.
	// stack container와 마찬가지로 기본적으로 내부 구조는 deque로 지정돼있다.

	//	std::queue<int> queue;
	//	
	//	queue.push(10);
	//	queue.push(20);
	//	queue.push(30);
	//	queue.push(40);
	//	queue.push(50);
	//	
	//	// queue가 비어있지 않다면 while문 실행.
	//	while (queue.empty() == false)
	//	{
	//		cout << "queue의 가장 먼저 들어온 값 먼저 출력 : " << queue.front() << endl;
	//		queue.pop();
	//	}

	// 비어있을 때 한 번 더 pop을 하면 에러가 뜬다. (터미네이터가 실행된다.)
#pragma endregion

#pragma endregion


	return 0;
}