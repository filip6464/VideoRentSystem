#pragma once
//List of Date's exeptions
class date_wrong_day_number : public exception
{
public:
	virtual const char* what() const;
};
class date_wrong_month_number : public exception
{
public:
	virtual const char* what() const;
};
class date_wrong_year_number : public exception
{
public:
	virtual const char* what() const;
};