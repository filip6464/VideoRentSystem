#pragma once
class Film_Base
{
public:
	enum Enum_Category_List
	{
		Akcja, Animowany, Biograficzny, Mlodziezowy, Dokumentalny, Dramatyczny, Edukacyjny, Historyczny
	};
	enum Enum_Type
	{
		VHS, DVD, Bluray
	};
// Funtions enum -> string
	inline string Enum_Category_List_toString(Enum_Category_List&);
	inline string Enum_Type_toString(Enum_Type&);
protected:

	string title;
	double price_per_day;
	vector<Enum_Category_List> Film_Category;
	int duration;
	Enum_Type type;
public:
	Film_Base(Film_Base& fb);
	Film_Base(string, double,int, vector<Enum_Category_List>);

//	getters
	string getTitle();
	double getPrice();
	int getDuration();
	vector<Enum_Category_List> getList_Film_Category();
//	Return record of film title,duration,price,type,list of categories
	virtual string toString();

	friend ostream& operator<<(ostream&, Film_Base&);
	friend bool operator==(Film_Base&, Film_Base&);
	virtual ~Film_Base();
};

