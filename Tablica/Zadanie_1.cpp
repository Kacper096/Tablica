#include"stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

void d(int tab[])
{



	for (int i = 0; i < 10; i++)
	{
		int suma1_10 = 0;
		int iloczyn = 1;
		int x = 4;
		for (int j = 1; j <= 10; j++)
		{
			int cosinus;
			cosinus = (1 / 3) * cos(pow(x, i + j));

			suma1_10 += cosinus;
		}
		for (int j = 3; j >= -2; j--)
		{
			int pierwiastek;
			pierwiastek = pow(x + 2 * (i + j), 1 / 2);

			iloczyn *= pierwiastek;
		}
		tab[i] = suma1_10 + iloczyn;
	}
}
void c(int tab[])
{

	

	for (int i = 0; i < 10; i++)
	{
		int iloczyn = 1;
		for (int j = 3; j >= -2; j--)
		{
			int x = 1;
			int wynik;
			wynik = pow(x + 2 * (i + j), 1 / 2);

			iloczyn *= wynik;
		}
		tab[i] = iloczyn;
	}
}
void b(int tab[])
{

	int suma = 0;

	for (int i = 0, j = 1; i < 10; i++, j++)
	{
		int suma = 0;
		for (int j = 1; j <= 10; j++)
		{
			int x = 1;
			int wynik;
			wynik = (1 / 3) * cos(pow(x, i + j));

			suma += wynik;
		}
		tab[i] = suma;
	}

}
void a(int tab[])
{


	for (int i = 0; i < 10; i++)
	{
		tab[i] = exp(i + 2);
	}
}
void Zadanie_1()
{
	int tablica[10];
	int tablica2[10];
	int tablica3[10];
	int tablica4[10];

	a(tablica);
	b(tablica2);
	c(tablica3);
	d(tablica4);

	cout << " Tablica A: ";
	for (int i = 0; i < 10; i++)
	{
		cout << "Tab ["<< i << "] "<< tablica[i] << endl;
		
	}

	cout << endl << " Tablica B: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "Tab [" << i << "] " << tablica2[i] << endl;
	}

	cout << endl << " Tablica C: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "Tab [" << i << "] " << tablica3[i] << endl;
	}

	cout << endl << " Tablica D: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "Tab [" << i << "] " << tablica4[i] << endl;
	}
	cout << endl;
	system("pause");
}