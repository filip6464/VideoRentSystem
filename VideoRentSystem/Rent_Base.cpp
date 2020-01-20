#include "pch.h"
#include "Rent_Base.h"

Rent_Base::~Rent_Base()
{
}

Rent_Base::Rent_Base(int Client_ID, int Film_ID, double price, Date rentDate) 
	: ID_Client(Client_ID),ID_Film(Film_ID),price_per_day(price),rent_Date(rentDate)
{
	return_Date = Date(NULL);
}

Rent_Base::Rent_Base(int Client_ID, int Film_ID, double price, Date rentDate, Date returnDate)
	: ID_Client(Client_ID), ID_Film(Film_ID), price_per_day(price), rent_Date(rentDate),return_Date(returnDate)
{
}

string Rent_Base::toString()
{
	string output = to_string(ID_Client)+"\t"+to_string(ID_Film)+"\t"+to_string(price_per_day) + "\t" + rent_Date.toString() + "\t" + return_Date.toString()+"\n";
	return output;
}

int Rent_Base::getClient_ID()
{
	return ID_Client;
}

int Rent_Base::getFilm_ID()
{
	return ID_Film;
}

double Rent_Base::getPrice()
{
	return price_per_day;
}

Date & Rent_Base::getRent_date()
{
	return rent_Date;
}

Date & Rent_Base::getReturn_date()
{
	return return_Date;
}

ostream & operator<<(ostream &os, Rent_Base &rb)
{
	os << rb.toString();
	return os;
}

bool operator==(Rent_Base &rb1, Rent_Base &rb2)
{
	if (rb1.Rent_Base::toString().compare(rb2.Rent_Base::toString()) == 0)
		return true;
	return false;
}
