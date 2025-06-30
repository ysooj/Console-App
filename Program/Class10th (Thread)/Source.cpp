#include <iostream>
#include <thread>

using namespace std;

void Update()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "Update..." << endl;
	}
}

void Renderer()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "Render..." << endl;
	}
}

int main()
{
#pragma region 스레드
	// 프로세스 내에서 실행되는 하나의 작업 단위입니다.

	// #include <thread>를 하면 아래의 2가지처럼 다 해도 된다.
	// thread thread1(Update);
	std::thread thread1(Update);
	std::thread thread2(Renderer);

	for (int i = 0; i < 5; i++)
	{
		cout << "Main Thread..." << endl;
	}

	thread1.join();
	thread2.join();
	// 운영체제(OS)에서 알아서 정해주는 것이기 때문에, 어떤 스레드가 먼저 호출될 지는 모른다.
	// thread1이 먼저 호출될 때도 있고, thread2가 먼저 호출될 때도 있고, 섞여서 호출될 때도 있다.
#pragma endregion


	return 0;
}