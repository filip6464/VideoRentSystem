#pragma once
class Rent_Base
{
	
protected:
	int ID_Client;
	int ID_Film;
	double price_per_day;
	Date rent_Date;
	Date return_Date;
public:
	Rent_Base(int, int, double, Date);
	Rent_Base(int, int, double, Date, Date);

	// return record of rent
	string toString();

	//	getters
	int getClient_ID();
	int getFilm_ID();
	double getPrice();
	Date& getRent_date();
	Date& getReturn_date();

	friend ostream& operator<<(ostream&, Rent_Base&);
	friend bool operator==(Rent_Base&, Rent_Base&);
	virtual ~Rent_Base();
};

