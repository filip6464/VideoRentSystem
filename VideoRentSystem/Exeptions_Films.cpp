#include "pch.h"
#include "Exeptions_Films.h"  //Pamietaj aby zakomentowac po ustawieniu include w pch.h

const char * film_not_exists::what() const
{
	return "film_not_exists\n";
}

const char * film_is_rented::what() const
{
	return "film_is_rented\n";
}

const char * film_is_not_rented::what() const
{
	return "film_is_not_rented\n";
}

const char * film_is_not_available::what() const
{
	return "film_is_not_available\n";
}

const char * film_more_then_one_match::what() const
{
	return "film_more_then_one_match\n";
}

const char * film_category_error::what() const
{
	return "film_category_error\n";
}
