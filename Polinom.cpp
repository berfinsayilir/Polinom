#include <iostream>
#include "Polinom.h"
#include <cmath> // sqrt fonktiyonu i�in

using namespace std;

Polinom::Polinom() // yap�c�
{
	
	
}

void Polinom::KatsayilaraDegerAta(int a, int b, int c) // A,B,C de�i�kenlerine kullan�c�n�n girdi�ini de�erleri at�yoruz
{
	
	A = a; 
	B = b;
	C = c;
	
}

int Polinom::DegerHesapla(int x)
{
	int y;
	
	y = (A*x*x) + B*x + C; // y de�erimizi hesapl�yoruz
	
		return y; // r yi geriye d�nd�r�yoruz
}

void Polinom::KokleriHesapla()
{
	float delta;
	
	delta = B*B - 4*A*C; // deltam�z� hesapl�yoruz
	
	if(delta>0) // o dan b�y�k m� bak�yoruz
	{
		cout<<"�ki Farkl� Reel K�k Vard�r ;"<<endl;
		cout<<"Birinci K�k : "<<(-B + sqrt(delta))/(2*A)<<endl; // iki k�kten birini hesapl�yoruz
		cout<<"�kinci K�k : "<<(-B - sqrt(delta))/(2*A)<<endl; // iki k�kten birini hesapl�yoruz
		
	}
	else if(delta == 0)
	{
		cout<<("Birbirine E�it �ki Reel K�k Vard�r ;")<<endl;
		cout<<"�ak���k K�k : "<<-B/(2*A)<<endl; // �ak���k olan k�k� hesaplay�p ekrana bas�yoruz
	}
	else
	{
		cout<<"Denklemin Reel K�k� Yoktur."<<endl;
	}
	
}
















