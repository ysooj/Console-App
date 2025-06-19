#include "Terran.h"

Terran::Terran()
{
	cout << "Created Terran" << endl;
	health = 2000;
	defense = 750;
}

void Terran::Stat()
{
	cout << "Terran Health : " << health << endl;
	cout << "Terran Defense : " << defense << endl;
}

Terran::~Terran()
{
	cout << "Release Terran" << endl;
}
