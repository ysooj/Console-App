#include "Vector2.h"

Vector2::Vector2()
{
    cout << "Created Vector2" << endl;
}

void Vector2::Coordinate(int x, int y)
{
    this->x = x;
    this->y = y;
}

const int& Vector2::X()
{
    return x;
}

const int& Vector2::Y()
{
    return y;
}

const Vector2& Vector2::operator+(const Vector2& vector)
{
    Vector2 clone;

    clone.x = this->x + vector.x;
    clone.y = this->y + vector.y;

    return clone;
}

const Vector2& Vector2::operator-(const Vector2& vector2)
{
    Vector2 clone;

    clone.x = this->x - vector2.x;
    clone.y = this->y - vector2.y;

    return clone;
}

const Vector2& Vector2::operator*(const Vector2& vector2)
{
    Vector2 clone;

    clone.x = this->x * vector2.x;
    clone.y = this->y * vector2.y;

    return clone;
}

const Vector2& Vector2::operator/(const Vector2& vector2)
{
    Vector2 clone;

    clone.x = this->x / vector2.x;
    clone.y = this->y / vector2.y;

    return clone;
}

const Vector2& Vector2::operator%(const Vector2& vector2)
{
    Vector2 clone;

    clone.x = this->x % vector2.x;
    clone.y = this->y % vector2.y;

    return clone;
}

const Vector2& Vector2::operator++()    // 전위 증가
{
    this->x++;
    this->y++;

    return *this;
}

const Vector2& Vector2::operator--()    // 전위 감소
{
    //  --x;
    //  --y;

    // [강사님 버전]
    this->x--;
    this->y--;

    return *this;
}

const Vector2 Vector2::operator++(int)        // 후위 증가
{
    //  Vector2 temp = *this;   // 현재 값 저장
    //  ++(*this);              // 전위 증가 활용
    //  return temp;            // 증가 전 값 반환

    // [강사님 버전]
    Vector2 clone;

    clone.Coordinate();


}

const Vector2 Vector2::operator--(int)        // 후위 감수
{
    //  Vector2 temp = *this;
    //  --(*this);
    //  return temp;

    // [강사님 버전]
    Vector2 clone;

    clone.Coordinate();


}

Vector2::~Vector2()
{
    cout << "Release Vector2" << endl;
}