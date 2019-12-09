#include<iostream>
#include<iomanip>
using namespace std;
struct hastane
{
	char isim[25];
	char soyisim[25];
	double tc = -1;
	char bolum[25];
	char sosyal[15];


};
void main()
{
	int karar;
	int ks = 0;
	double k_sil = 0;
	hastane hasta[100];

	do
	{

		cout << "1. Kayit ekle" << endl;
		cout << "2. Kayit sil" << endl;
		cout << "3. listele" << endl;
		cout << "4. cikis" << endl;
		cout << " secim : ";
		cin >> karar;
		switch (karar)
		{
		case 1:
			cout << " isim : "; cin >> hasta[ks].isim;
			cout << " soyisim : "; cin >> hasta[ks].soyisim;
			cout << " TC = "; cin >> hasta[ks].tc;
			cout << "Bolum--Dahiliye,Hariciye, Ortopedi, Cildiye : "; cin >> hasta[ks].bolum;
			cout << " Sosyal Guvence -- Emekli, isci, Memur, isveren --:"; cin >> hasta[ks].sosyal;
			cout << " eklendi" << endl;
			ks++;
			break;
		case 2:
			cout << " silecek kayit  TC numarsi giriniz : ";
			cin >> k_sil;
			cout << endl;
			int j;
			for (j = 0; j < ks; j++)

			{
				if (hasta[j].tc == k_sil) { cout << " kayit silindi" << endl; hasta[j].tc = -1; break; }
			}
			if (j == ks)cout << "kayit yok";

			break;


		case 3:

			for (int i = 0; i < ks; i++)
			{

				if (hasta[i].tc == -1)
					continue;

				cout << " bolum : " << hasta[i].bolum << endl;
				cout << "hastanin ismi:  " << hasta[i].isim;
				cout << "hastanin soyismi :" << hasta[i].soyisim;
				cout << "TC :" << hasta[i].tc << endl;
				cout << "\n";


			}
			break;

		}

	} while (karar != 4);
}