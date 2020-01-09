#include "pch.h"
#include "Exeptions_Clients.h" // Pamietaj aby zakomentowac po ustawieniu w include w pch.h

const char * client_not_exists::what() const throw()
{
	return "client_not_exists";
}

const char * client_has_active_rents::what() const throw()
{
	return "client_has_active_rents";
}

const char * client_more_then_one_match::what() const throw()
{
	return "client_more_then_one_match";
}

const char * client_Film_ID_is_added_already::what() const throw()
{
	return "client_Film_ID_is_added_already";
}

const char * client_Film_ID_is_not_rented::what() const throw()
{
	return "client_Film_ID_is_not_rented";
}
