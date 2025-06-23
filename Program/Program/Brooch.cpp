#include "Brooch.h"

Brooch::Brooch()
{
	name = "Brooch";
	immunity = 5;
}

void Brooch::Effect()
{
	cout << "Name : " << name << endl;
	cout << "Effect : Immunity increases by " << immunity << endl;
}

Brooch::~Brooch()
{
	cout << "Release Brooch" << endl;
}
