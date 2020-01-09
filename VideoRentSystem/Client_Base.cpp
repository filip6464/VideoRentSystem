#include "pch.h"
#include "Client_Base.h"


Client_Base::Client_Base(string, string) : name(name), surname(surname) {}

Client_Base::~Client_Base()
{
}


// Return Name of Client
string Client_Base::getName()
{
	return name;
}


// Return Surname of Client
string Client_Base::getSurname()
{
	return surname;
}


// Return record of Client as string
string Client_Base::toString()
{
	return name+" "+surname;
}

ostream & operator<<(ostream &os, Client_Base &cb)
{
	os << cb.toString();
	return os;
}
