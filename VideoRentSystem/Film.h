#pragma once
#include "Film_Base.h"
class Film :
	public Film_Base
{
	static int counter;

	bool isRented;
	bool isAvailable;
	int active_rent_ID;

	int ID_Film;
public:
	Film(Film_Base& fb);
	int getID();
	bool isDeletable();
	bool isRentable();
	bool isEditable();
	bool update();
	bool setRent(int);
	bool set_not_Rent();
	string toString();


	friend ostream& operator<<(ostream& os, Film& f);
	~Film();
};

