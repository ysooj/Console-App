#include "Ghost.h"

Ghost::Ghost()
{
	health = 75;
	defense = 85;
}

void Ghost::Stat()
{
	cout << "Ghost Health : " << health << endl;
	cout << "Ghost Defense : " << defense << endl;
}

Ghost::~Ghost()
{
	cout << "Release Ghost" << endl;
}
