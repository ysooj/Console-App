#include "Necklace.h"

Necklace::Necklace()
{
	name = "Necklace";
	accuracy = 10;
}

void Necklace::Effect()
{
	cout << "Name : " << name << endl;
	cout << "Effect : Accuracy increases by " << accuracy << endl;
}

Necklace::~Necklace()
{
	cout << "Release Necklace" << endl;
}
