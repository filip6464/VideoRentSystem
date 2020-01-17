#include "pch.h"
#include "Exeptions_Clients.h" // Pamietaj aby zakomentowac po ustawieniu w include w pch.h

const char * client_not_exists::what() const
{
	return "client_not_exists\n";
}

const char * client_has_active_rents::what() const
{
	return "client_has_active_rents\n";
}

const char * client_more_then_one_match::what() const
{
	return "client_more_then_one_match\n";
}

const char * client_Film_ID_is_added_already::what() const
{
	return "client_Film_ID_is_added_already\n";
}

const char * client_Film_ID_is_not_rented::what() const
{
	return "client_Film_ID_is_not_rented\n";
}
