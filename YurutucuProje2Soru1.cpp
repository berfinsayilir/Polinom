#include <iostream>
#include "Polinom.h"
#include <locale>

using namespace std;

void menu() // menumüzü ekrana basan fonksiyon
{
	cout<<"1-) Katsayýlara Deðer Ata"<<endl;
	cout<<"2-) Deðer Hesapla"<<endl;
	cout<<"3-) Kökleri Hesapla"<<endl;
	cout<<"4-) Çýkýþ"<<endl;
	cout<<"Bir Ýþlem Seçiniz : ";
}

int main()
{
	setlocale(LC_ALL, "Turkish"); // türkçe karakter kodu
	int a,b,c,x,islem;
	Polinom p; // sýnýfýmýzý nesneye dönüþtürüyoruz
	bool kontrol = false,dongud = true;
	
	while(dongud) // tekrarlayan döngü
	{
		menu();
		cin>>islem;
		cout<<endl;
		switch(islem) // kullanýcýn girdiði deðere göre menüyü çaðýran yapý 
		{
			case 1:
				cout<<"A,B,C Deðerlerini Giriniz : ";
				cin>>a>>b>>c; // kullanýcýdan deðerleri alýyoruz
				p.KatsayilaraDegerAta(a,b,c); // sýnýftaki fonksiyonumuza deðerleri gönderiyoruz
				kontrol = true; // diðer menulere giriþ izni veriyoruz
				cout<<endl; // alt satýra geçiyoruz

				break;
			case 2:
				if(kontrol) // Deðerleri girdiðini kontrol ediyoruz
				{
				cout<<"X Deðiþkeninin Deðerini Giriniz : ";
				cin>>x;
				cout<<" Y : "<<p.DegerHesapla(x); // fonksiyona kullanýcýnýn girdiði deðeri gönderiyoruz
				cout<<endl;
				}
				else
				{
					cout<<"Lütfen Önce A,B,C Deðerlerini Doldurunuz !"<<endl;
				}
				break;
			case 3 :
				if(kontrol) // Deðerleri girdiðini kontrol ediyoruz
				{
					p.KokleriHesapla(); // Fonksiyonu çaðýrýyoruz
					cout<<endl;
				}
				else
				{
					cout<<"Lütfen Önce A,B,C Deðerlerini Doldurunuz !"<<endl;
				}
				break;
			case 4 :
				dongud = false; // programý kapatýyoruz
				break;
		}
		
	}
	

	return 0;
}
