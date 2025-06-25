#include <iostream>
#include "../Program/Vector2.h"

using namespace std;

// [OOP의 4대 특징]
// 상속, 다형성, 추상화, 캡슐화

int main()
{
#pragma region 캡슐화
    // 객체의 상태와 그 상태를 조작하는 기능을 하나로 합친 다음
    // 객체 외부에서 이 상태에 직접 접근하지 못하도록 제한하는 기능입니다.

    Vector2 vector1;
    Vector2 vector2;

    vector1.Coordinate(1, 1);
    vector2.Coordinate(2, 3);

    Vector2 direction = vector1 + vector2;

    cout << "(" << direction.X() << ", " << direction.Y() << ")" << endl;
    cout << "direction X : " << direction.X() << endl;
    cout << "direction Y : " << direction.Y() << endl;
#pragma endregion

#pragma region 전위, 후위 증감 연산자 오버로딩
    // [내 버전]
    //  // 초기 상태
    //  Vector2 initial;
    //  initial.Coordinate(1, 2);
    //  cout << "초기값 : (" << initial.X() << ", " << initial.Y() << ")" << endl;
    //  cout << "-----------------------------" << endl;
    //  cout << endl;
    //  
    //  // 전위 증가
    //  Vector2& beforePlus = ++initial;
    //  cout << "initial 값 : (" << initial.X() << ", " << initial.Y() << ")" << endl;
    //  cout << "전위 증가 후 : (" << beforePlus.X() << ", " << beforePlus.Y() << ")" << endl;
    //  
    //  cout << endl;
    //  
    //  // 전위 감소
    //  Vector2& beforeMinus = --initial;
    //  cout << "initial 값 : (" << initial.X() << ", " << initial.Y() << ")" << endl;
    //  cout << "전위 감소 후 : (" << beforeMinus.X() << ", " << beforeMinus.Y() << ")" << endl;
    //  
    //  cout << endl;
    //  cout << "-----------------------------" << endl;
    //  cout << endl;
    //  
    //  // 후위 증가
    //  cout << "initial 값 : (" << initial.X() << ", " << initial.Y() << ")" << endl;
    //  Vector2 afterPlus = initial++;
    //  cout << "후위 증가 결과(반환값) : (" << afterPlus.X() << ", " << afterPlus.Y() << ")" << endl;
    //  cout << "후위 증가 후 상태 : (" << initial.X() << ", " << initial.Y() << ")" << endl;
    //  
    //  cout << endl;
    //  
    //  // 후위 감소
    //  cout << "initial 값 : (" << initial.X() << ", " << initial.Y() << ")" << endl;
    //  Vector2 afterMinus = initial--;
    //  cout << "후위 감소 결과(반환값) : (" << afterMinus.X() << ", " << afterMinus.Y() << ")" << endl;
    //  cout << "후위 감소 후 상태 : (" << initial.X() << ", " << initial.Y() << ")" << endl;


    // [강사님 버전]
#pragma endregion

    return 0;
}