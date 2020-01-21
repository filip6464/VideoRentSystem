#pragma once
class Client_Base
{
public:
	Client_Base(string,string);
	Client_Base(Client_Base& cb);
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
	virtual string toString();

	friend ostream& operator<<(ostream&, Client_Base&);
	friend bool operator==(Client_Base&, Client_Base&);
};

