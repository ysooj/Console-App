#include "Firebat.h"

Firebat::Firebat()
{
	health = 50;
	defense = 1;
}

void Firebat::Stat()
{
	cout << "Firebat Health : " << health << endl;
	cout << "Firebat Defense : " << defense << "\n" << endl;
}

Firebat::~Firebat()
{
	cout << "Release Firebat" << endl;
}
