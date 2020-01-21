#include "pch.h"
#include "Rent.h"

int counter=0;

Rent::Rent(Rent_Base &rb) : Rent_Base(rb)
{
	isActive = true;
	ID_Rent = counter;
	counter++;
}

string Rent::toString()
{
	string output = to_string(ID_Rent) +"\t" + to_string(ID_Client) + "\t" + to_string(ID_Film) + "\t" + to_string(price_per_day) + "\t" + rent_Date.toString() + "\t" + return_Date.toString() + "\n";
	return output;
}

bool Rent::rentisActive()
{
	return isActive;
}

void Rent::setPrice(double p)
{
	price_per_day = p;
}

bool Rent::set_rentDate(Date d)
{
	if (d.getTime() < return_Date.getTime()) {
		rent_Date = d;
		return true;
	}
	else {
		return false;
	}
}

bool Rent::set_returnDate(Date d)
{
	if (d.getTime() > return_Date.getTime()) {
		rent_Date = d;
		return true;
	}
	else {
		return false;
	}
}

Rent::~Rent()
{
}

ostream & operator<<(ostream & os, Rent & r)
{
	os << r.toString();
	return os;
}
