#pragma once
#include "Client_Base.h"
class Client :
	public Client_Base
{
//TODO	friend Lista_Wypozyczen
	static int counter;
	int ID_Client;
	Date register_date;
	vector<int> active_rent_list;
public:
	Client(Client_Base, Date&);
	// Adding ID_Rent to list of active rent
	bool addRent(int);
	// Removing ID_Rent from list of active rent
	bool removeRent(int);
	// getters5
	Date& getRegister_date();
	int getID();
	vector<int>& getRent_list();
	// Checking is Client deletable, if active_rent_list not empty, throw exeption
	bool isDeletable();
	// Update name and surname if Client Base not empty
	bool update(Client_Base&);
	
	virtual ~Client();
	
	// Display toString method
	friend ostream& operator<<(ostream& os, Client& c);
};


