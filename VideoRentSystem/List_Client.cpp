#include "pch.h"
#include "List_Client.h"


List_Client::List_Client()
{
}

void List_Client::adding_Client()
{
	string imie, nazwisko;
	system("cls");
	cout << "---Dodawanie Klienta---" << endl;
	cout << "Podaj Imie: ";
	cin >> imie;
	cout << "Podaj Nazwisko: ";
	cin >> nazwisko;
	cout << "Trwa sprawdzanie poprawnosci..." << endl;
	Client_Base cb(imie, nazwisko);
	try {
		int return_id = this->find_client(cb);
		if(return_id != -1){
			cout << "Dodawanie zakonczone pomyslnie! Dodano klienta o identyfikatorze "<<return_id << endl;
			_sleep(2);
		}
	}
	catch (exception& e) {
		cout <<"Dodawanie nieudane... Blad: "<< e.what();
		_sleep(2);
	}
}

void List_Client::show_List_of_Clients()
{
	system("cls");
	this->show_Clients();
	cout << "Aby wrocic wcisnij enter... " << endl;
	char x;
	cin >> x;
}

void List_Client::deleting_Client()
{
}

void List_Client::editing_Client()
{
	system("cls");
	this->show_Clients();
	int id, returned_id;
	string imie, nazwisko;
		cout << "Podaj ID klienta do edycji: " << endl;
		cin >> id;
		cout << "Trwa weryfikacja..." << endl;
		try {
			returned_id = this->find_client(id);
		}
		catch (exception& e) {
			cout << "Nie poprawna weryfikacja... Blad: " << e.what();
			_sleep(2);
		}
		if (returned_id != -1) {
			cout << "Weryfikacja poprwana." << endl;
			cout << "Podaj Imie: ";
			cin >> imie;
			cout << "Podaj Nazwisko: ";
			cin >> nazwisko;
			cout << "Trwa sprawdzanie poprawnosci..." << endl;
			Client_Base cb(imie, nazwisko);
			this->edit_client(returned_id, cb);
			cout << "Edytowanie zakonczone pomyslnie!" << endl;
			_sleep(2);
		}


}


List_Client::~List_Client()
{
}

bool List_Client::del_client(int id)
{
	List_C.erase(id);
	return true;
}

bool List_Client::add_client(Client& c)
{
	int id = c.getID();
	List_C.insert(pair<int, Client&>(id, c));
	return true;
}

bool List_Client::edit_client(int id, Client_Base cb)
{
	for (auto x = List_C.begin(); x != List_C.end();x++) {
		if (x->first == id && x->second.getID()== id) {
			Client& c = x->second;
			c.update(cb);
			return true;
		}
		else if (x->first == id && x->second.getID() == id) {
			throw rent_edit_find_error();
			return false;
		}
		return false;
	}
}

int List_Client::find_client(Client_Base cb)
{
	int counterFindedObjects = 0;
	int lastFindedID = -1;
	for (auto x : List_C) {
		if (x.second == cb) {
			lastFindedID = x.second.getID();
			counterFindedObjects++;
		}
	}
	if (counterFindedObjects == 1)
		return lastFindedID;
	if (counterFindedObjects == 0)
		throw client_not_exists();
	if (counterFindedObjects > 1)
		throw client_more_then_one_match();
	return -1;
}

int List_Client::find_client(int ID)
{
	auto x = List_C.find(ID);
	if (x != List_C.end())
		return x->first;
	else {
			throw client_not_exists();
		return -1;
	}
}

Client & List_Client::getClient(int id)
{
	auto x = List_C.find(id);
	Client& c = x->second;
	return c;
}

void List_Client::show_Clients()
{
	cout << "---Lista Klientow Wypozyczalni---" << endl;
	cout << "ID Klienta\tImie\tNazwisko" << endl;
	for (auto x : List_C) {
		cout << x.second << endl;
	}
}

int List_Client::find_client(Client_Base cb)
{
	int counterFindedObjects = 0;
	int lastFindedID=-1;
	for (auto x : List_C) {
		if (x.second == cb) {
			lastFindedID = x.second.getID();
			counterFindedObjects++;
		}
	}
	if (counterFindedObjects == 1)
		return lastFindedID;
	if (counterFindedObjects == 0)
		throw client_not_exists();
	if (counterFindedObjects > 1)
		throw client_more_then_one_match();

	return -1;