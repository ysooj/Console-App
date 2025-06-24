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
	// const�� ���� ������ X �Լ��� '= ��'�� �ص� x ���� �ٲ�� ������
	// ���� �Ժη� �ٲ��� ���ϰ� �ϱ� ���ؼ� const�� �б� �������� ���� ��.
	const int & Y();

	const Vector2& operator + (const Vector2& vector2);
	// const Vector2& operator - (const Vector2& vector2);
	// const Vector2& operator * (const Vector2& vector2);
	// const Vector2& operator / (const Vector2& vector2);
	// const Vector2& operator % (const Vector2& vector2);

	// �Ű� ������ �ƹ��͵� ������ ���� ���� ������ �����ε��̴�.
	const Vector2& operator ++ ();
	const Vector2& operator -- ();

	~Vector2();
};

// ���� ������ �����ε� ������.
// ���� ������ ���� ���� �� ������.