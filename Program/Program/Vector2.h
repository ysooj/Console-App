#pragma once

#include <iostream>

using namespace std;

class Vector2
{
private:
    int x;
    int y;
public:
    Vector2();
    ~Vector2();
    void Coordinate(int x, int y);
    const int& X();
    // const를 넣지 않으면 X 함수에 '= 값'을 해도 x 값이 바뀌기 때문에
    // 값을 함부로 바꾸지 못하게 하기 위해서 const로 읽기 전용으로 해준 것.
    const int& Y();

    const Vector2& operator + (const Vector2& vector2);
    const Vector2& operator - (const Vector2& vector2);
    const Vector2& operator * (const Vector2& vector2);
    const Vector2& operator / (const Vector2& vector2);
    const Vector2& operator % (const Vector2& vector2);

    // 매개 변수에 아무것도 없으면 전위 증감 연산자 오버로딩이다.
    const Vector2& operator ++();
    const Vector2& operator --();

    // 후위 증감 연산자 오버로딩
    const Vector2 operator ++(int);
    const Vector2 operator --(int);
    // 후위 증감 연산자는 임시 객체를 반환해야 하므로
    // 참조(const Vector2&)를 반환하면 함수 종료 후 임시 객체가 사라져
    // 댕글링 참조(dangling reference)가 발생할 위험이 있다.
    // 따라서 반드시 값(Vector2)으로 반환해야 한다.
    // const Vector2& operator++(int);  // 이렇게 선언하면 안 됨!
};

// 단항 연산자 오버로딩 만들어보기.
// 후위 증감과 전위 증감 다 만들어보자.