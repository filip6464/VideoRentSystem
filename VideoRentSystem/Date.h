#pragma once
class Date
{
	// string
	char temp_buffer[12];
	string buffer;
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
	// Create empty date
	Date(int);
	// Create specified date YYYY-MM-DD
	Date(int,int,int);
	// Create specified date YYYY-MM-DD
	~Date();
	// Return date in seconds
	time_t getTime();
	// Display Date in format YYYY-MM-DD
	string toString();
	//is Null?
	bool isNull();

	friend Date operator+(const Date&, const int);
	friend ostream& operator<<(ostream&, Date&);

};

