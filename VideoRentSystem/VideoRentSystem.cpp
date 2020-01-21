// VideoRentSystem.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"

void test_Date();
void test_ClientBase();
void test_ClientandClientBase();
void test_FilmBase();
void test_FilmandFilmBase();
void test_RentBase();


int main()
{
//	test_Date();
//	test_ClientBase();
//	test_Client();
//	test_FilmBase();
//	test_FilmandFilmBase();
//	test_RentBase();
}


void test_Date() {
	Date d1;
	Date d2(1999,06,30);
	Date d3 = d2 + 2;
	Date d4(3000, 10, 10);
	Date d5(2000, 3000, 10);
	Date d6(2000, 10, 3000);
	cout << "========================" << endl << "TEST DATE" << endl;
	cout << "Aktualna Data: " << d1  << endl;
	cout << "Aktualna Data: getTime: " << d1.getTime() << endl;
	cout << "Data 1999-06-30: " << d2 << endl;
	cout << "Data 1999-06-30 + 2: " << d3 << endl;
	cout << "Data toString: " << d1 << endl;
	cout << "Exeption date_wrong_day_number: " << d6 << endl;
	cout << "Exeption date_wrong_month_number: " << d5 << endl;
	cout << "Exeption date_wrong_year_number: " << d4 << endl;
	cout << "========================" <<endl;
}
void test_ClientBase(){
	cout << "========================" << endl << "TEST ClientBase" << endl;
	Client_Base cb1("testName","testSurname");
	Client_Base cb2("testName2", "testSurname2");
	Client_Base cb3("testName", "testSurname2");
	Client_Base cb4(cb1);
	cout << "cb1:" << cb1<<endl;
	cout << "cb2:" << cb2 << endl;
	cout << "toString: cb1:" << cb1.toString() << endl;
	cout << "toString: cb2:" << cb2.toString() << endl;
	bool test1,test2,test3;
	test1 = (cb1 == cb2) ? true : false;  //false
	test2 = (cb1 == cb3) ? true : false;  //false
	test3 = (cb1 == cb4) ? true : false;  //true	
	cout << "compare test1 [0]: " << test1 << endl;
	cout << "compare test2 [0]: " << test2 << endl;
	cout << "compare test3 [1]: " << test3 << endl;
	cout << "========================" << endl;
}
void test_ClientandClientBase() {
	try {
		cout << "========================" << endl << "TEST ClientBase" << endl;
		Client_Base cb1("testName", "testSurname");
		Client_Base cb2("testName2", "testSurname2");
		Client_Base cb3("testName", "testSurname2");
		Client_Base cb4("abc", "123");
		Date d1;
		Date d2(1999, 05, 25);
		Client c1(cb1, d1);
		Client c2(cb2, d2);
		Client c3(cb4, d2);
		cout << "c1:" << c1 << endl;
		cout << "c2:" << c2 << endl;
		cout << "toString: c1:" << c1.toString() << endl;
		cout << "toString: c2:" << c2.toString() << endl;
		bool test1, test2, test3;
		test1 = (cb1 == c1) ? true : false;  //true
		test2 = (cb2 == c1) ? true : false;  //false
		test3 = (cb1 == c3) ? true : false;  //true	
		cout << "compare test1 [1]: " << test1 << endl;
		cout << "compare test2 [0]: " << test2 << endl;
		cout << "compare test3 [1]: " << test3 << endl;
		try {
		cout << "addRent: 1 [1]: " << c1.addRent(1) << endl;
		cout << "addRent: 9 [1]: " << c1.addRent(9) << endl;
		cout << "addRent: 5 [1]: " << c1.addRent(5) << endl;
		cout << "removeRent: 1 [1]: " << c1.removeRent(1) << endl;
		cout << "removeRent: 9 [1]: " << c1.removeRent(9) << endl;
		cout << "Exeptions add [0]: " << c1.addRent(5) << endl;
		cout << "Exeptions remove [0]: " << c1.removeRent(10) << endl;
		cout << "Exeptions isDeletable c2 [1]: " << c2.isDeletable() << endl;
		cout << "Exeptions isDeletable c1 [0] throwed exeption: " << c1.isDeletable() << endl;
		}
		catch (exception &e)
		{
			cout<< e.what();
		}
		Client_Base n2("testowy", "koles");
		cout << "update before: " << c3 << endl;
		cout << "update: [1]:" << c3.update(n2) << endl;
		cout << "update after: " << c3 << endl;
		cout << "content of c1: " << endl;
		for (auto x : c1.getRent_list()) {
			cout << x << endl;
		}
		cout << "date of c2: " << c2.getRegister_date() << endl;
		cout << "========================" << endl;
	}
	catch (exception &e)
	{
		e.what();
	}
}
void test_FilmBase() {
	cout << "========================" << endl << "TEST FilmBase" << endl;
	vector<Film_Base::Enum_Category_List> cat1;
	vector<Film_Base::Enum_Category_List> cat2;
	cat1.push_back(Film_Base::Enum_Category_List::Akcja);
	cat2.push_back(Film_Base::Enum_Category_List::Dramatyczny);
	Film_Base fb1("film1",5.5,111,cat1);
	Film_Base fb2("film2",10.3,112,cat2);
	Film_Base fb3("film3",20.1,113,cat1);
	Film_Base fb4(fb1);
	cout << "fb1:\n" << fb1;
	cout << "fb2:\n" << fb2;
	bool test1, test2, test3;
	test1 = (fb1 == fb2) ? true : false;  //false
	test2 = (fb1 == fb3) ? true : false;  //false
	test3 = (fb1 == fb4) ? true : false;  //true	
	cout << "compare test1 [0]: " << test1 << endl;
	cout << "compare test2 [0]: " << test2 << endl;
	cout << "compare test3 [1]: " << test3 << endl;
	cout << "========================" << endl;
}
void test_FilmandFilmBase() {
	cout << "========================" << endl << "TEST FilmBase" << endl;
	vector<Film_Base::Enum_Category_List> cat1;
	vector<Film_Base::Enum_Category_List> cat2;
	cat1.push_back(Film_Base::Enum_Category_List::Akcja);
	cat2.push_back(Film_Base::Enum_Category_List::Dramatyczny);
	cat2.push_back(Film_Base::Enum_Category_List::Edukacyjny);
	Film_Base fb1("film1", 5.5, 111, cat1);
	Film_Base fb2("film2", 10.3, 112, cat2);
	Film_Base fb3("film3", 20.1, 113, cat1);
	Film_Base fb4(fb1);
	Film f1(fb1);
	Film f2(fb2);
	cout << "f1:\n" << f1;
	cout << "f2:\n" << f2;
	bool test1, test2, test3;
	test1 = (fb1 == f1) ? true : false;  //true
	test2 = (fb1 == f2) ? true : false;  //false
	test3 = (fb1 == fb4) ? true : false;  //true	
	cout << "compare test1 [1]: " << test1 << endl;
	cout << "compare test2 [0]: " << test2 << endl;
	cout << "compare test3 [1]: " << test3 << endl;
	cout << "========================" << endl;
}
void test_RentBase() {
	cout << "========================" << endl << "TEST RentBase" << endl;
	Rent_Base rb1( 1, 1, 5.5, Date());
	Rent_Base rb2( 1, 2, 6.5, Date(1999,06,25),Date(NULL));
	Rent_Base rb3(1, 2, 6.5, Date(1999, 06, 25), Date(NULL));
	Rent_Base rb4(rb1);
	cout << "rb1:\n" << rb1;
	cout << "rb2:\n" << rb2;
	bool test1, test2, test3;
	test1 = (rb1 == rb2) ? true : false;  //false
	test2 = (rb1 == rb3) ? true : false;  //false
	test3 = (rb1 == rb4) ? true : false;  //true	
	cout << "compare test1 [0]: " << test1 << endl;
	cout << "compare test2 [0]: " << test2 << endl;
	cout << "compare test3 [1]: " << test3 << endl;
	cout << "========================" << endl;
}

