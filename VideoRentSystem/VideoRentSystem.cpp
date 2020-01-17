// VideoRentSystem.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
//#include "Date.h"
void test_Date();
void test_ClientBase();
void test_Client();

int main()
{
	
//	test_Date();
	test_ClientBase();
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
void test_Client() {
	cout << "========================" << endl << "TEST ClientBase" << endl;
	Client_Base cb1("testName", "testSurname");
	Client_Base cb2("testName2", "testSurname2");
	Client_Base cb3("testName", "testSurname2");
	Client_Base cb4("testName", "testSurname");
	Client c1(cb1, Date());
	cout << "c1:" << cb1 << endl;
	cout << "c2:" << cb2 << endl;
	cout << "toString: cb1:" << cb1.toString() << endl;
	cout << "toString: cb2:" << cb2.toString() << endl;
	bool test1, test2, test3;
	test1 = (cb1 == cb2) ? true : false;  //false
	test2 = (cb1 == cb3) ? true : false;  //false
	test3 = (cb1 == cb4) ? true : false;  //true	
	cout << "compare test1 [0]: " << test1 << endl;
	cout << "compare test2 [0]: " << test2 << endl;
	cout << "compare test3 [1]: " << test3 << endl;
	cout << "========================" << endl;
}
