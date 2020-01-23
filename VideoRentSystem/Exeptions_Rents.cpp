#include "pch.h"
#include "Exeptions_Rents.h"

const char * rent_add_error::what() const
{
	return "rent_add_error\n";
}

const char * rent_edit_find_error::what() const
{
	return "rent_edit_find_error\n";
}
