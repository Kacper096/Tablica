#include "stdafx.h"
#include <iostream>
#include <time.h>

using namespace std;

int Minus_el_tab(int tab[], int n)
{
	int suma;
	
	for (int i = n - 1; i >= 0; i--)
	{
		suma = tab[i] - tab[i - 1];
	}
	//cout << suma;
	return suma;
}
int Dod_el_tab(int tab[], int n )
{
	int suma = 0;
	for (int i = 0; i < n; i++)
	{
		
		suma += tab[i];
	}
	//cout << suma;
	return suma;
}
void Zadanie_3()
{
	int rozmiar;
	
	cout << " Podaj rozmiar tablicy: ";
	cin >> rozmiar;

	int *tablica = new int[rozmiar];

	srand(time(NULL));

	for (int i = 0; i < rozmiar; i++)
	{
		tablica[i] = rand() % 100;
		cout << tablica[i] << endl;
	}
	cout << Dod_el_tab(tablica, rozmiar);
	cout << Minus_el_tab(tablica, rozmiar);										//// DO POPRAWKI

	system("pause");
}