#include "stdafx.h"

#include <fstream>
#include <string>

using namespace std;

void zad61()
{
	ifstream dane("dane_6_1.txt");
	int k = 107;
	ofstream wypis("wyniki_6_1.txt");
	string slowo;
	int a;											
	for (int i = 0; i<100; ++i)						
	{
		dane >> slowo;								
		for (int j = 0; j < slowo.size(); ++j)		
		{
			a = slowo[j];							
			a += k % 26;
			while (a > 90)
			{
				a -= 26;
			}
			slowo[j] = a;
		}
		wypis << slowo << endl;
	}
	dane.close();
	wypis.close();
}

void zad62()
{
	ifstream dane("dane_6_2.txt");
	ofstream wypis("wyniki_6_2.txt");
	string slowo;
	int a, k;
	for (int i = 0; i < 3000; ++i)
	{
		dane >> slowo;
		dane >> k;
		for (int j = 0; j < slowo.size(); ++j)
		{
			a = slowo[j];
			a -= k % 26;
			while (a < 65)
			{
				a += 26;
			}
			slowo[j] = a;
		}
		wypis << slowo << endl;
	}
	dane.close();
	wypis.close();
}

void zad63()
{
	ifstream dane("dane_6_3.txt");
	ofstream wypis("wyniki_6_3.txt");
	string slowo;
	string zmienione;
	int a, b, k;
	for (int i = 0; i<3000; ++i)
	{
		k = 0;
		dane >> slowo;
		dane >> zmienione;
		a = slowo[0];
		b = zmienione[0];
		k = b - a;
		if (k<0)
			k += 26;
		for (int j = 0; j<slowo.size(); ++j)
		{
			a = slowo[j];
			b = zmienione[j];
			a += k % 26;
			while (a > 90)
			{
				a -= 26;
			}
			if (a != b)
			{
				wypis << slowo << endl;
				break;
			}
		}
	}
	dane.close();
	wypis.close();
}

int main()
{

	zad61();
	zad62();
	zad63();	

	return 0;
}
