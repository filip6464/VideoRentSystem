#pragma once
//List of rent's exeptions
class rent_add_error : public exception
{
	virtual const char* what() const;
};

