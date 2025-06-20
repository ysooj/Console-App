#include "Ghost.h"

Ghost::Ghost()
{
	health = 45;
	defense = 0;
}

void Ghost::Stat()
{
	cout << "Ghost Health : " << health << endl;
	cout << "Ghost Defense : " << defense << "\n" << endl;
}

Ghost::~Ghost()
{
	cout << "Release Ghost" << endl;
}
