#pragma once
#include "Rent_Base.h"
class Rent :
	public Rent_Base
{
	static int counter;
	int ID_Rent;
	bool isActive;

public:
	Rent(Rent_Base&);
	string toString();
	bool rentisActive();
	void setPrice(double);
	bool set_rentDate(Date);	//returns false when returnDate<rentDate
	bool set_returnDate(Date);	//returns false when returnDate<rentDate
	
	// Display toString method
	friend ostream& operator<<(ostream&, Rent&);
	~Rent();

};

