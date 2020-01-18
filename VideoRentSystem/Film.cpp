#include "pch.h"
#include "Film.h"

int Film::counter = 0;;

Film::~Film()
{
}
Film::Film(Film_Base & fb) : Film_Base(fb)
{
	isRented = false;
	isAvailable = true;
	int active_rent_ID = -1;
	ID_Film = counter;
	counter++;
}

int Film::getID()
{
	return ID_Film;
}

bool Film::isDeletable()
{
	if (active_rent_ID == -1)
		return true;
	else
		return false;
}

bool Film::isRentable()
{
	if (active_rent_ID == -1 && isAvailable)
		return true;
	else
		return false;
}

bool Film::isEditable()
{
	if (active_rent_ID == -1)
		return true;
	else
		return false;
}

bool Film::update()
{
	if (active_rent_ID == -1)
		return true;
	else
		return false;
}

bool Film::setRent(int id)
{
	if (active_rent_ID == -1 && !isRented && isAvailable) {
		active_rent_ID = id;
		isRented = true;
		return true;
	}
	else
		return false;
}

bool Film::set_not_Rent()
{
	if (active_rent_ID != -1 && isRented) {
		active_rent_ID = -1;
		isRented = false;
		return true;
	}
	else
		return false;
}

string Film::toString()
{
	string dur = to_string(duration);
	string pri = to_string(price_per_day);
	string typ = Enum_Type_toString(type);
	string cat = "[ ";
	for (auto x : Film_Category) {
		cat += Enum_Category_List_toString(x);
		cat += " ";
	}
	cat += "]";
	string output = to_string(ID_Film)+"\t"+title + "\t" + dur + "\t" + pri + "\t" + typ + "\t" + cat + "\n";
	return output;
}

ostream & operator<<(ostream & os, Film & f)
{
	return os << f.toString();
}
