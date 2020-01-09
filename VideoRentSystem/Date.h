#pragma once
//#include"Exeptions_Date.h"
class Date
{
	// string
	char buffer[12];
	// Info about time
	struct tm timeinfo;
	// time in seconds
	time_t t;

	// Set Date Day
	void setDay(int);
	// Set Date Month
	void setMonth(int);
	// Set Date Year
	void setYear(int);
	// Updating timeinfo and buffer
	void reload();

public:

	// Create current date
	Date();
	// Create specified date YYYY-MM-DD
	Date(int,int,int);
	// Create specified date YYYY-MM-DD
	~Date();
	// Return date in seconds
	time_t getTime();
	// Display Date in format YYYY-MM-DD
	string toString();

	friend Date operator+(const Date&, const int);
	friend ostream& operator<<(ostream&, Date&);

};

