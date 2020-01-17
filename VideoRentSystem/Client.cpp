#include "pch.h"
#include "Client.h"

int Client::counter = 0;

Client::Client(Client_Base &cb) : Client_Base(cb)
{
	register_date = Date();
	ID_Client = counter;
	++counter;
}

Client::Client(Client_Base& cb,Date& d) : Client_Base(cb), register_date(d)
{
	ID_Client = counter;
	++counter;
}


Client::~Client()
{
}

ostream & operator<<(ostream & os, Client & c)
{
	os << c.toString();
	return os;
}

bool Client::addRent(int ID_Rent)
{
	for (auto x : active_rent_list) {
		if (ID_Rent == x)
			return false;
	}
	active_rent_list.push_back(ID_Rent);
	return true;
}

bool Client::removeRent(int ID_Rent)
{
	for (auto it = active_rent_list.begin();it!= active_rent_list.end();it++) {
		if (ID_Rent == *it) {
			active_rent_list.erase(it);
			return true;
		}
	}
		return false;
}

Date& Client::getRegister_date()
{
	return register_date;
}

int Client::getID()
{
	return ID_Client;
}

vector<int>& Client::getRent_list()
{
	return active_rent_list;
}

bool Client::isDeletable()
{
	if(active_rent_list.empty())
		return true;
	else {
		throw client_has_active_rents();
		return false;
	}
}

bool Client::update(Client_Base &cb)
{
	if (!cb.getName().empty())
		this->name = cb.getName();
	else
		return false;

	if (!cb.getSurname().empty())
		this->surname = cb.getSurname();
	else
		return false;

	return true;
}
