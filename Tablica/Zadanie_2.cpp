#include "stdafx.h"
#include <iostream>

using namespace std;

void UNIKALNE_DLA_D(int tab[], int tab2[], int rozmiar)
{
	for (int i = 0; i < 11; i++)
	{
		if (tab[i] < 0)																			/////JESLI LICZBA MNIEJSZA OD 0
		{
			for (int j = 0; j < 11; j++)									
			{
				if (abs(tab[i]) == tab[j])													////I POSIADA SWOJA WARTOSC PRZECIWNA TO WPISZ JA DO TABLICY O TAKIEJ ILOSCI LICZB
					tab2[i] = tab[i];
			}
		}
	}
}
int ILE_MIN_CO_PLUS(int tab[])
{																							////SPRAWDZA CZY LICZBA UJEMNA POSIADA SWOJA WARTOSC PRZECIWNA
	int a = 0;																				////I ZWRACA ILOSC TAKICH LICZB ABY UTWORZYC TABLICE DLA TYCH WARTOSCI
	for (int i = 0; i < 11; i++)
	{
		if (tab[i] < 0)
		{
			for (int j = 0; j < 11; j++)
			{
				if (abs(tab[i]) == tab[j])
					a++;
			}
		}
	}
	//cout << a;
	return a;
}
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
	{
		
	int rozmiar = Sprawdzenie_ILE_PLUS(tablica);								//// <<<<<-------PRZEZ TA FUNKCJE WIEMY JAKI MA MIEC ROZMIAR DRUGA TABLICA
	int *tablica2 = new int[rozmiar];											//// <<<------TWORZYMY TABLICE O DANYM ROZMIARZE

	Only_plus(tablica, tablica2, rozmiar);										//// <<<<-----DO NOWEJ TABLICY "WKLADAMY" DODATNIE LICZBY
	
	cout << " Tablica z podpunktu A zawierajace tylko liczby dodatnie " << endl;

	for (int i = 0; i < rozmiar; i++)
		cout << " Tab[" << i << "] = " << tablica2[i] << endl;

	delete[]tablica2;	}															//// ZWALNIAMY MIEJSCE, NISZCZAC TABLICE
	
	////SORTUJEMY TABLICE ABY POZNIEJ WYZNACZYC ELEMENTY UNIKALNE
	SORTOWANIE(tablica, 11);

	////B----
	////TABLICA UNIKALNA
	{int rozmiar = ILE_UNIKALNE(tablica, 11);
	int *tablica2 = new int[rozmiar];

	UNIKALNE(tablica, tablica2, rozmiar);
	
	cout <<endl << " Tablica z podpunktu B zawierajace tylko liczby unikalne " << endl;

	for (int i = 0; i < rozmiar; i++)
		cout << " Tab[" << i << "] = " << tablica2[i] << endl;

	delete[]tablica2; }
	/////----------------------

	////C-------
	{zm_min_na_plus(tablica, TABLICA);						///// TABLICA Z LICZBAMI BEZ MINUSA
	SORTOWANIE(TABLICA, 11);

	int rozmiar = ILE_UNIKALNE(TABLICA, 11);
	int *tablica2 = new int[rozmiar];

	UNIKALNE(TABLICA, tablica2, rozmiar);

	cout <<endl << " Tablica z podpunktu C zawierajace tylko liczby unikalne (x=x i x = -x)" << endl;

	for (int i = 0; i < rozmiar; i++)
		cout << " Tab[" << i << "] = " << tablica2[i] << endl;

	delete[]tablica2; }
	
	////D-------
	{
		int rozmiar = ILE_MIN_CO_PLUS(tablica);
		int *tablica2 = new int[rozmiar];

		UNIKALNE_DLA_D(tablica, tablica2, rozmiar);

		cout <<endl << " Tablica z podpunktu D zawierajace tylko liczby unikalne (x = -x) " << endl;

		for (int i = 0; i < rozmiar; i++)
			cout << " Tab[" << i << "] = " << tablica2[i] << endl;


		delete[]tablica2;
	}
	
	system("pause");
}