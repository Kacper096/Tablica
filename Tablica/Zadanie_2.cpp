#include "stdafx.h"
#include <iostream>

using namespace std;

void zm_min_na_plus(int tab[], int tab2[])
{
	for (int i = 0; i < 11; i++)
	{
		tab2[i] = abs(tab[i]);
		//cout << tab2[i] << endl;
	}
}
void UNIKALNE(const int tab[], int tab2[], int rozmiar)
{
	for (int j = 0; j < rozmiar; )
	{
		for (int i = 1; i < 11; i++)
		{
			if (tab[i - 1] == tab[i])
			{
				tab2[j] = tab[i - 1];
				j++;
			}

		}
		
	}

}
int	ILE_UNIKALNE(int tab[], int rozmiar)
{
	int a = 0;
	for (int i = 1; i < rozmiar; i++)
	{
		if (tab[i - 1] == tab[i])
		{
			a++;
		}
	}
	
	return a;
}
void Only_plus(const int tab[], int tab2[], int rozmiar )
{
	
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
void SORTOWANIE(int tab[], int rozmiar)
{
	
	////SORTOWANIE TABLICY 
	for (int i = 1; i < rozmiar; i++)
	{
		for (int j = rozmiar - 1; j >= 1; j--)
		{
			if (tab[j] < tab[j - 1])
			{
				int wynik = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = wynik;
			}

		}
	}
	/////

}
void Zadanie_2()
{
	int tablica[11] = { 10,-3,5,8,-2,7,13,10,3,-8,2 };
	int TABLICA[11];
	
	////A----
	int rozmiar = Sprawdzenie_ILE_PLUS(tablica);			//// <<<<<-------PRZEZ TA FUNKCJE WIEMY JAKI MA MIEC ROZMIAR DRUGA TABLICA
	int *tablica2 = new int[rozmiar];					//// <<<------TWORZYMY TABLICE O DANYM ROZMIARZE

	Only_plus(tablica, tablica2, rozmiar);				//// <<<<-----DO NOWEJ TABLICY "WKLADAMY" DODATNIE LICZBY

	delete[]tablica2;									//// ZWALNIAMY MIEJSCE, NISZCZAC TABLICE
	
	////SORTUJEMY TABLICE ABY POZNIEJ WYZNACZYC ELEMENTY UNIKALNE
	SORTOWANIE(tablica, 11);

	////B----
	////TABLICA UNIKALNE
	int rozmiar2 = ILE_UNIKALNE(tablica, 11);
	int *tablica3 = new int[rozmiar2];

	UNIKALNE(tablica, tablica3, rozmiar2);
	
	delete[]tablica3;
	/////----------------------

	////C-------
	zm_min_na_plus(tablica, TABLICA);
	SORTOWANIE(TABLICA, 11);
	
	int rozmiar3 = ILE_UNIKALNE(TABLICA, 11);
	int *tablica4 = new int[rozmiar3];

	UNIKALNE(TABLICA, tablica4, rozmiar3);

	delete[]tablica4;
	
	
	system("pause");
}