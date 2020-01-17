#include "pch.h"
#include "Film_Base.h"

Film_Base::Film_Base(string title, double price, vector<Enum_Category_List> category_list) : title(title), price_per_day(price),Film_Category(category_list)
{
}

string Film_Base::getTitle()
{
	return title;
}

double Film_Base::getPrice()
{
	return price_per_day;
}

vector<Enum_Category_List> Film_Base::getList_Film_Category()
{
	return Film_Category;
}

string Film_Base::toString()
{
	string output = title;
	return output;
}

Film_Base::~Film_Base()
{
}

ostream & operator<<(ostream &os, Film_Base &fb)
{
	os << fb.toString();
	return os;
}

bool operator==(Film_Base &fb1, Film_Base &fb2)
{
	if (fb1.toString().compare(fb2.toString()) == 0)
		return true;
	return false;
}
