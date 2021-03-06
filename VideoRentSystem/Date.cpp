#include "pch.h"
#include "Date.h"



Date::Date()
{
	time(&t);
	this->reload();
}

Date::Date(int n)
{
	buffer = " - ";
}


Date::Date(int year, int month, int day)
{
	//strcpy_s(buffer, 5, "error");
	try {
		timeinfo = { 0 };
		setYear(year);
		setMonth(month);
		setDay(day);
		t = mktime(&timeinfo);  //tm -> t_time
		this->reload();
	}
	catch (exception& e)
	{
		cout<< e.what() <<endl;
	}
}

Date::~Date()
{
}


// Display Date in format YYYY-MM-DD
string Date::toString()
{
	if (this->isNull())
		if (buffer.compare(" - ") == 0)
			return " - ";
		else
			return "error";
	else
		return buffer;
}

bool Date::isNull()
{
	if (buffer.compare(" - ") == 0 || buffer.empty())
		return true;
	else
		return false;
}


// Set Date Day
void Date::setDay(int day)
{
	if (day > 0 && day < 32)
		timeinfo.tm_mday = day;
	else
		throw date_wrong_day_number();
}


// Set Date Month
void Date::setMonth(int month)
{
	if (month > 0 && month < 13)
		timeinfo.tm_mon = month - 1;
	else
		throw date_wrong_month_number();
}


// Set Date Year
void Date::setYear(int year)
{
	if (year > 1899 && year < 3000)
		timeinfo.tm_year = year - 1900;
	else
		throw date_wrong_year_number();
}

void Date::reload()
{
	localtime_s(&timeinfo,&t);
	strftime(temp_buffer, sizeof(buffer), "%Y-%m-%d", &timeinfo);
	buffer = temp_buffer;
}


// Return date in seconds
time_t Date::getTime()
{
	return t;
}

Date operator+(const Date& d, const int number_of_days)
{
	Date date = d;
	date.t += number_of_days * 86400; //86400 number of seconds in one day
	date.reload();
	return date;
}

ostream& operator<<(ostream & os, Date& d)
{
	os << d.toString();
	return os;
}
