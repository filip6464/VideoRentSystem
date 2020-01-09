#pragma once
class Client_Base
{
public:
	Client_Base(string,string);
	virtual ~Client_Base();
protected:
	string name;
	string surname;
public:
	// Return Name of Client
	string getName();
	// Return Surname of Client
	string getSurname();
	// Return record of Client as string
	string toString();

	friend ostream& operator<<(ostream&, Client_Base&);
	//TODO friend virtual Client_Base& operator==(Client_Base&, Client&);
};

