// Tablica.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Nr_zadania.h"

using namespace std;


void main()
{
	int wybor;

	cin >> wybor;

	switch (wybor)
	{
	case 1: Zadanie_1();		break;
	case 2: Zadanie_2();		break;
	}
}

