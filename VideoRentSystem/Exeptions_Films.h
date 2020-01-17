#pragma once
//List of film's exeptions
class film_not_exists : public exception
{
	virtual const char* what() const;
};
class film_is_rented : public exception
{
	virtual const char* what() const;
};
class film_is_not_rented : public exception
{
	virtual const char* what() const;
};
class film_is_not_available : public exception
{
	virtual const char* what() const;
};
class film_more_then_one_match : public exception
{
	virtual const char* what() const;
};
class film_category_error : public exception
{
	virtual const char* what() const;
};
