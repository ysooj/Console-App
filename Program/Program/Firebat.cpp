#include "Firebat.h"

Firebat::Firebat()
{
	health = 13;
	defense = 91;
}

void Firebat::Stat()
{
	cout << "Firebat Health : " << health << endl;
	cout << "Firebat Defense : " << defense << endl;
}

Firebat::~Firebat()
{
	cout << "Release Firebat" << endl;
}
