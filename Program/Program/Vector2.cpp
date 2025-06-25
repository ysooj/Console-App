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

const Vector2& Vector2::operator++()    // ���� ����
{
    this->x++;
    this->y++;

    return *this;
}

const Vector2& Vector2::operator--()    // ���� ����
{
    //  --x;
    //  --y;

    // [����� ����]
    this->x--;
    this->y--;

    return *this;
}

const Vector2 Vector2::operator++(int)        // ���� ����
{
    //  Vector2 temp = *this;   // ���� �� ����
    //  ++(*this);              // ���� ���� Ȱ��
    //  return temp;            // ���� �� �� ��ȯ

    // [����� ����]
    Vector2 clone;

    clone.Coordinate();


}

const Vector2 Vector2::operator--(int)        // ���� ����
{
    //  Vector2 temp = *this;
    //  --(*this);
    //  return temp;

    // [����� ����]
    Vector2 clone;

    clone.Coordinate();


}

Vector2::~Vector2()
{
    cout << "Release Vector2" << endl;
}