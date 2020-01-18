#include "pch.h"
#include "Film_Base.h"

inline string Film_Base::Enum_Category_List_toString(Enum_Category_List &v)
{
	switch (v)
	{
	case Enum_Category_List::Akcja:   return "Akcja";
	case Enum_Category_List::Animowany:   return "Animowany";
	case Enum_Category_List::Biograficzny: return "Biograficzny";
	case Enum_Category_List::Mlodziezowy: return "Mlodziezowy";
	case Enum_Category_List::Dokumentalny: return "Dokumentalny";
	case Enum_Category_List::Dramatyczny: return "Dramatyczny";
	case Enum_Category_List::Edukacyjny: return "Edukacyjny";
	case Enum_Category_List::Historyczny: return "Historyczny";
	default:      return "Unknown";
	}
}

inline string Film_Base::Enum_Type_toString(Enum_Type &v)
{
	switch (v)
	{
	case Enum_Type::VHS:   return "VHS";
	case Enum_Type::DVD:   return "DVD";
	case Enum_Type::Bluray: return "Bluray";
	default:      return "Unknown";
	}
}

Film_Base::Film_Base(Film_Base & fb)
	: title(fb.getTitle()),price_per_day(fb.getPrice()),duration(fb.getDuration()),Film_Category(fb.getList_Film_Category())
{
}

Film_Base::Film_Base(string title, double price,int duration, vector<Enum_Category_List> category_list) : title(title), price_per_day(price),duration(duration),Film_Category(category_list)
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

int Film_Base::getDuration()
{
	return duration;
}

vector<Film_Base::Enum_Category_List> Film_Base::getList_Film_Category()
{
	return Film_Category;
}

string Film_Base::toString()
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
	string output = title+"\t"+dur + "\t" + pri + "\t" +typ+"\t"+ cat+"\n";
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

bool operator==(Film_Base &fb1, Film_Base&fb2)
{
	if (fb1.Film_Base::toString().compare(fb2.Film_Base::toString()) == 0)
		return true;
	return false;
}
