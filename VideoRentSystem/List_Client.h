#pragma once
class List_Client
{
	map<int, Client> List_C;
	bool del_client(int);
	bool add_client(Client&);
	bool edit_client(int, Client_Base);
	int find_client(Client_Base); //throw client_not_exists, client_more_then_one_match
	int find_client(int);
	Client& getClient(int);
	void show_Clients();
public:
	List_Client();

	void adding_Client();
	void show_List_of_Clients();
	void deleting_Client();
	void editing_Client();


	~List_Client();
};

