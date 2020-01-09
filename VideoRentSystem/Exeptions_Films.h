#pragma once
//List of film's exeptions
class film_not_exists : public exception
{
	virtual const char* what() const throw();
} film_not_exists;
class film_is_rented : public exception
{
	virtual const char* what() const throw();
} film_is_rented;
class film_is_not_rented : public exception
{
	virtual const char* what() const throw();
} film_is_not_rented;
class film_is_not_available : public exception
{
	virtual const char* what() const throw();
} film_is_not_available;
class film_more_then_one_match : public exception
{
	virtual const char* what() const throw();
} film_more_then_one_match;
class film_category_error : public exception
{
	virtual const char* what() const throw();
} film_category_error;
