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
	void Coordinate(int x, int y);
	const int & X();
	// const를 넣지 않으면 X 함수에 '= 값'을 해도 x 값이 바뀌기 때문에
	// 값을 함부로 바꾸지 못하게 하기 위해서 const로 읽기 전용으로 해준 것.
	const int & Y();

	const Vector2& operator + (const Vector2& vector2);
	// const Vector2& operator - (const Vector2& vector2);
	// const Vector2& operator * (const Vector2& vector2);
	// const Vector2& operator / (const Vector2& vector2);
	// const Vector2& operator % (const Vector2& vector2);

	// 매개 변수에 아무것도 없으면 전위 증감 연산자 오버로딩이다.
	const Vector2& operator ++ ();
	const Vector2& operator -- ();

	~Vector2();
};

// 단항 연산자 오버로딩 만들어보기.
// 후위 증감과 전위 증감 다 만들어보자.