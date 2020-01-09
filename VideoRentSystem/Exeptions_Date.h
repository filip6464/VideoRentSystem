#pragma once
//List of Date's exeptions
class date_wrong_day_number : public exception
{
	virtual const char* what() const throw();
} date_wrong_day_number;
class date_wrong_month_number : public exception
{
	virtual const char* what() const throw();
} date_wrong_month_number;
class date_wrong_year_number : public exception
{
	virtual const char* what() const throw();
} date_wrong_year_number;