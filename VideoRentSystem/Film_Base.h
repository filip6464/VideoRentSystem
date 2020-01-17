#pragma once
class Film_Base
{
protected:
	string title;
	double price_per_day;
	vector<Enum_Category_List> Film_Category;
	int duration;
	Enum_Type type;
public:
	Film_Base(string, double, vector<Enum_Category_List>);

//	getters
	string getTitle();
	double getPrice();

	vector<Enum_Category_List> getList_Film_Category();
	string toString();

	friend ostream& operator<<(ostream&, Film_Base&);
	friend bool operator==(Film_Base&, Film_Base&);
	virtual ~Film_Base();
};

