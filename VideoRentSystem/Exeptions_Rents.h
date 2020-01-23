#pragma once
//List of rent's exeptions
class rent_add_error : public exception
{
	virtual const char* what() const;
};

class rent_edit_find_error : public exception
{
	virtual const char* what() const;
};

