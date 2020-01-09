// VideoRentSystem.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include "Date.h"
void test_Date();

int main()
{
	test_Date();
}


void test_Date() {
	Date d1;
	Date d2(1999,06,30);
	Date d3 = d2 + 2;
	Date d4(3000, 10, 10);
	Date d5(10, 3000, 10);
	Date d6(10, 10, 3000);
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
