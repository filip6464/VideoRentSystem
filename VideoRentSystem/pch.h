﻿// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln

#ifndef PCH_H
#define PCH_H
#include <iostream>
#include <exception>
#include <fstream>
#include <string>
#include <ctime>
#include <vector>
using namespace std;
//#define EXEPTIONS_DATE
  //Pamietaj aby zakomentowac po ustawieniu include w pch.h
//#define DATE
#include"Exeptions_Date.h"
#include"Exeptions_Clients.h"
//#include"Exeptions_Films.h"
#include "Enum_Category_List.cpp"
#include "Enum_Type.cpp"

#include "Date.h"
#include "Client_Base.h"
#include "Client.h"


// TODO: w tym miejscu dodaj nagłówki, które mają być wstępnie kompilowane
#endif
