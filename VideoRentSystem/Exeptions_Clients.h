#pragma once
//List of clients's exeptions
class client_not_exists : public exception
{
	virtual const char* what() const throw();
} client_not_exists;
class client_has_active_rents : public exception
{
	virtual const char* what() const throw();
} client_has_active_rents;
class client_more_then_one_match : public exception
{
	virtual const char* what() const throw();
} client_more_then_one_match;
class client_Film_ID_is_added_already : public exception
{
	virtual const char* what() const throw();
} client_Film_ID_is_added_already;
class client_Film_ID_is_not_rented : public exception
{
	virtual const char* what() const throw();
} client_Film_ID_is_not_rented;