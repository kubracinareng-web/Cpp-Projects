
#include <iostream>
using namespace std;

int main() {
	const int OGRENCI_SAYISI = 5;
	double notlar[OGRENCI_SAYISI];
	double toplam = 0;
	double enYuksek, enDusuk;

	cout << "===== OGRENCI NOTLARI HESAPLAYICI ====" << endl;

	// Dizideki her elemanı doldurmak için for döngüsü
	for (int i = 0; i < OGRENCI_SAYISI; i++) {
		cout << "\n" << (i + 1) << " . ogrencinin notunu girin: ";
		cin >> notlar[i];
		toplam = toplam + notlar[i];
	}

	// İlk notu başlangıç olarak kabul ediyoruz
	enYuksek = notlar[0];
	enDusuk = notlar[0];

	// Diziyi tekrar dolasip en yuksek ve en dusuk notu buluyoruz
	for (int i = 1; i < OGRENCI_SAYISI; i++) {
		if (notlar[i] > enYuksek) {
			enYuksek = notlar[i];
		}
		if (notlar[i] < enDusuk) {
			enDusuk = notlar[i];
		}
	}
	double ortalama = toplam / OGRENCI_SAYISI;

	cout << "\n===== SONUCLAR ====" << endl;
	cout << "Girilen notlar: ";
	for (int i = 0; i < OGRENCI_SAYISI; i++) {
		cout << notlar[i] << " ";
	}
	cout << endl;
	
	cout << "Sinif ortalamasi: " << ortalama << endl;
	cout << "En yuksek not: " << enYuksek << endl;
	cout << "En dusuk not: " << enDusuk << endl;

	return 0;
}

