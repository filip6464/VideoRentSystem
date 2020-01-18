#include "pch.h"
#include "Client_Base.h"


Client_Base::Client_Base(string name, string surname) : name(name), surname(surname) {}

Client_Base::Client_Base(Client_Base & cb) : name(cb.getName()), surname(cb.getSurname()) {}

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
	string output = name + " " + surname;
	return output;
}

ostream & operator<<(ostream &os, Client_Base &cb)
{
	os << cb.toString();
	return os;
}

bool operator==(Client_Base& cb1, Client_Base &cb2)
{
	if (cb1.Client_Base::toString().compare(cb2.Client_Base::toString()) == 0)
		return true;
	return false;
}
