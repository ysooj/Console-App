#pragma once
class Packet
{
private:
	int errorCode = -9999;
public:
	Packet();
	~Packet();
	void Call();
};

