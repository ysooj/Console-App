#include <iostream>
#include "Circle.h"

using namespace std;

Circle::Circle()
{
	cout << "Created Circle" << endl;
}

void Circle::Volume()
{
	cout << "\n\n¥ð ¡¿ radius©÷\n\n" << endl;
}

Circle::~Circle()
{
	cout << "Release Circle" << endl;
}