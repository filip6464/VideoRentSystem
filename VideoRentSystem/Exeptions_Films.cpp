#include "pch.h"
#include "Exeptions_Films.h"  //Pamietaj aby zakomentowac po ustawieniu include w pch.h

const char * film_not_exists::what() const throw()
{
	return "film_not_exists";
}

const char * film_is_rented::what() const throw()
{
	return "film_is_rented";
}

const char * film_is_not_rented::what() const throw()
{
	return "film_is_not_rented";
}

const char * film_is_not_available::what() const throw()
{
	return "film_is_not_available";
}

const char * film_more_then_one_match::what() const throw()
{
	return "film_more_then_one_match";
}

const char * film_category_error::what() const throw()
{
	return "film_category_error";
}
