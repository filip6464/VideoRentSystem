#include "pch.h"
#include "Exeptions_Date.h"  //Pamietaj aby zakomentowac po ustawieniu include w pch.h
const char * date_wrong_day_number::what() const 
{
	return "date_wrong_day_number";
}

const char * date_wrong_month_number::what() const 
{
	return "date_wrong_month_number";
}

const char * date_wrong_year_number::what() const 
{
	return "date_wrong_year_number";
}
