#include "Marine.h"

Marine::Marine()
{
	health = 100;
	defense = 50;
}

void Marine::Stat()
{
	cout << "Marine Health : " << health << endl;
	cout << "Marine Defense : " << defense << endl;
}

Marine::~Marine()
{
	cout << "Release Marine" << endl;
}
