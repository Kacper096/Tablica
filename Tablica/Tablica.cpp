// Tablica.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Nr_zadania.h"

using namespace std;


void main()
{
	int wybor;

	
	for (int i = 1; i < 3; i++)
	{
		cout << " Zadanie " << i << endl;
	}
	cout << " Wybierz swoje zadanie: ";
	cin >> wybor;

	switch (wybor)
	{
	case 1: Zadanie_1();		break;
	case 2: Zadanie_2();		break;
	case 3: Zadanie_3();		break;
	}
}

