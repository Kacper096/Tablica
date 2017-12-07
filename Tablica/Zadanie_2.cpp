#include "stdafx.h"
#include <iostream>

using namespace std;

void unikalne(int tab[], int tab2[])
{
	for (int i = 0, k = 0; i < 11 && k < 11; i++)
	{
		for (int j = 0; j < 11; j++)
			if (tab[i] == tab[j])
			{
				
				
					tab2[k] = tab[j];
					k++;
					cout << tab2[k] << endl;
				
			}

	}
}
void Only_plus(int tab[], int tab2[], int rozmiar )
{
	int a = 0;
	for (int i = 0, j = 0; i < 11, j < rozmiar; i++)
	{
		if (tab[i] > 0)
		{
			//cout << tab[i] << '\t';
			tab2[j] = tab[i];

			//cout << tab2[j] << endl;
			j++;

		}

	}


}
int Sprawdzenie_ILE_PLUS(int tab[])
{
	int a = 0;
	for (int i = 0; i < 11; i++)
	{
		if (tab[i] > 0)
			a++;
	}
	return a;
}
void Zadanie_2()
{
	int tablica[11] = { 10,-3,5,8,-2,7,13,10,3,-8,2 };

	int rozmiar = Sprawdzenie_ILE_PLUS(tablica);			//// <<<<<-------PRZEZ TA FUNKCJE WIEMY JAKI MA MIEC ROZMIAR DRUGA TABLICA
	int *tablica2 = new int[rozmiar];					//// <<<------TWORZYMY TABLICE O DANYM ROZMIARZE

	Only_plus(tablica, tablica2, rozmiar);				//// <<<<-----DO NOWEJ TABLICY "WKLADAMY" DODATNIE LICZBY

	delete[]tablica2;									//// ZWALNIAMY MIEJSCE, NISZCZAC TABLICE
	

	

	system("pause");
}