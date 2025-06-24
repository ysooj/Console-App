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

const Vector2 & Vector2::operator+(const Vector2 & vector)
{
	Vector2 clone;

	clone.x = this->x + vector.x;
	clone.y = this->y + vector.y;

	return clone;
}

const Vector2& Vector2::operator++()
{
	Vector2 clone;
	clone.x = this->x + this->x;
	clone.y = this->y + this->y;

	return clone;
}

const Vector2& Vector2::operator--()
{
	Vector2 clone;
	clone.x = this->x - this->x;
	clone.y = this->y - this->y;

	return clone;
}

Vector2::~Vector2()
{
	cout << "Release Vector2" << endl;
}
