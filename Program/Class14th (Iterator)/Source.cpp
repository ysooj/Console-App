#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
#pragma region 반복자
    std::vector<int> vector;

    vector.push_back(10);
    vector.push_back(20);
    vector.push_back(30);
    vector.push_back(40);
    vector.push_back(50);

    // for문의 () 안에서 iterator를 선언해주면, for문 안에서만 쓸 수 있는 지역 변수로 인식하여
    // for문 안에서만 iterator를 쓸 수 있다.
    for (std::vector<int>::iterator iterator = vector.begin(); iterator != vector.end(); iterator++)
    {
        cout << *iterator << endl;
        // iterator는 내부적으로 포인터처럼 동작하지만, 실제로 포인터가 아니므로 iterator를 출력할 수는 없다.
        // *iterator를 통해 반복자가 가리키는 실제 값(int)을 참조한다.

        // erase를 하게 되면 무효화 현상으로 인해 에러가 나게 된다.
        // 이 for문은 cout으로 출력하고 그걸 erase하는 구조인데
        // 가장 앞의 원소를 erase하게 되면 그 뒤의 원소들이 무효화되게 되므로 에러가 나는 것이다.
        // vector.erase(iterator);
    }
#pragma endregion

    return 0;
}