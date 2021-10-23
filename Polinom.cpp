#include <iostream>
#include "Polinom.h"
#include <cmath> // sqrt fonktiyonu için

using namespace std;

Polinom::Polinom() // yapýcý
{
	
	
}

void Polinom::KatsayilaraDegerAta(int a, int b, int c) // A,B,C deðiþkenlerine kullanýcýnýn girdiðini deðerleri atýyoruz
{
	
	A = a; 
	B = b;
	C = c;
	
}

int Polinom::DegerHesapla(int x)
{
	int y;
	
	y = (A*x*x) + B*x + C; // y deðerimizi hesaplýyoruz
	
		return y; // r yi geriye döndürüyoruz
}

void Polinom::KokleriHesapla()
{
	float delta;
	
	delta = B*B - 4*A*C; // deltamýzý hesaplýyoruz
	
	if(delta>0) // o dan büyük mü bakýyoruz
	{
		cout<<"Ýki Farklý Reel Kök Vardýr ;"<<endl;
		cout<<"Birinci Kök : "<<(-B + sqrt(delta))/(2*A)<<endl; // iki kökten birini hesaplýyoruz
		cout<<"Ýkinci Kök : "<<(-B - sqrt(delta))/(2*A)<<endl; // iki kökten birini hesaplýyoruz
		
	}
	else if(delta == 0)
	{
		cout<<("Birbirine Eþit Ýki Reel Kök Vardýr ;")<<endl;
		cout<<"Çakýþýk Kök : "<<-B/(2*A)<<endl; // çakýþýk olan kökü hesaplayýp ekrana basýyoruz
	}
	else
	{
		cout<<"Denklemin Reel Kökü Yoktur."<<endl;
	}
	
}
















