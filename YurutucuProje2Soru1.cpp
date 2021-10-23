#include <iostream>
#include "Polinom.h"
#include <locale>

using namespace std;

void menu() // menum�z� ekrana basan fonksiyon
{
	cout<<"1-) Katsay�lara De�er Ata"<<endl;
	cout<<"2-) De�er Hesapla"<<endl;
	cout<<"3-) K�kleri Hesapla"<<endl;
	cout<<"4-) ��k��"<<endl;
	cout<<"Bir ��lem Se�iniz : ";
}

int main()
{
	setlocale(LC_ALL, "Turkish"); // t�rk�e karakter kodu
	int a,b,c,x,islem;
	Polinom p; // s�n�f�m�z� nesneye d�n��t�r�yoruz
	bool kontrol = false,dongud = true;
	
	while(dongud) // tekrarlayan d�ng�
	{
		menu();
		cin>>islem;
		cout<<endl;
		switch(islem) // kullan�c�n girdi�i de�ere g�re men�y� �a��ran yap� 
		{
			case 1:
				cout<<"A,B,C De�erlerini Giriniz : ";
				cin>>a>>b>>c; // kullan�c�dan de�erleri al�yoruz
				p.KatsayilaraDegerAta(a,b,c); // s�n�ftaki fonksiyonumuza de�erleri g�nderiyoruz
				kontrol = true; // di�er menulere giri� izni veriyoruz
				cout<<endl; // alt sat�ra ge�iyoruz

				break;
			case 2:
				if(kontrol) // De�erleri girdi�ini kontrol ediyoruz
				{
				cout<<"X De�i�keninin De�erini Giriniz : ";
				cin>>x;
				cout<<" Y : "<<p.DegerHesapla(x); // fonksiyona kullan�c�n�n girdi�i de�eri g�nderiyoruz
				cout<<endl;
				}
				else
				{
					cout<<"L�tfen �nce A,B,C De�erlerini Doldurunuz !"<<endl;
				}
				break;
			case 3 :
				if(kontrol) // De�erleri girdi�ini kontrol ediyoruz
				{
					p.KokleriHesapla(); // Fonksiyonu �a��r�yoruz
					cout<<endl;
				}
				else
				{
					cout<<"L�tfen �nce A,B,C De�erlerini Doldurunuz !"<<endl;
				}
				break;
			case 4 :
				dongud = false; // program� kapat�yoruz
				break;
		}
		
	}
	

	return 0;
}
