#pragma once
//List of clients's exeptions
class client_not_exists : public exception
{
	virtual const char* what() const;
};
class client_has_active_rents : public exception
{
	virtual const char* what() const;
};
class client_more_then_one_match : public exception
{
	virtual const char* what() const;
};
class client_Film_ID_is_added_already : public exception
{
	virtual const char* what() const;
};
class client_Film_ID_is_not_rented : public exception
{
	virtual const char* what() const;
};