#include "Packet.h"
#include <iostream>

using namespace std;

Packet::Packet()
{
	cout << "Created Packet" << endl;
}

Packet::~Packet()
{
	cout << "Release Packet" << endl;
}

void Packet::Call()
{
	cout << "Error Code : " << errorCode << endl;
}
