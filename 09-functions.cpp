
#include <iostream>
using namespace std;

const int GUN_SAYISI = 7;

//Diziyi parametre olarak alan fonksiyonlar
double ortalamaHesapla(double sicakliklar[], int boyut) {
	double toplam = 0;
	for (int i = 0; i < boyut; i++) {
		toplam = toplam + sicakliklar[i];
	}
	return toplam / boyut;
}

double enYuksekSicakligiBul(double sicakliklar[], int boyut) {
	double enYuksek = sicakliklar[0];
	for (int i = 1; i < boyut; i++) {
		if (sicakliklar[i] > enYuksek) {
			enYuksek = sicakliklar[i];
		}
	}
	return enYuksek;
}

double enDusukSicakligiBul(double sicakliklar[], int boyut) {
	double enDusuk = sicakliklar[0];
	for (int i = 1; i < boyut; i++) {
		if (sicakliklar[i] < enDusuk) {
			enDusuk = sicakliklar[i];
		}
	}
	return enDusuk;
}
// YENI KAVRAM : fonksiyona diziyle birlikte bir "esik deger" de gonderiyoruz
int esikUstuGunSayisiBul(double sicakliklar[], int boyut, double esikDeger) {
	int sayac = 0;
	for (int i = 0; i < boyut; i++) {
		if (sicakliklar[i] > esikDeger) {
			sayac = sayac + 1;
		}
	}
	return sayac;
}

// Celcius' u Fahrenheit 'a  ceviren fonksiyon (sicaklik donusturucudeki gibi)
double celsiusToFahrenheit(double c) {
	return (c * 9.0 / 5.0) + 32;
}

int main() {
	double sicakliklar[GUN_SAYISI];
	string gunler[GUN_SAYISI] = { "Pazartesi" , "Sali" , "Carsamba" , "Persembe", "Cuma" , "Cumartesi" , "Pazar" };

	cout << "==== HAFTALIK SICAKLIK ANALIZ SISTEMI ====" << endl;

	cout << "\n" << GUN_SAYISI << "gunluk Celsius sicakligi girin:" << endl;
	for (int i = 0; i < GUN_SAYISI; i++) {
		cout << gunler[i] << ": ";
		cin >> sicakliklar[i];
	}

	cout << "\n---- GUNLUK SICAKLIKLAR (Fahrenheit) -----" << endl;
	for (int i = 0; i < GUN_SAYISI; i++) {
		double fahrenheit = celsiusToFahrenheit(sicakliklar[i]);
		cout << gunler[i] << ": " << sicakliklar[i] << "C / " << fahrenheit << " F " << endl;
	}

	double ortalama = ortalamaHesapla(sicakliklar, GUN_SAYISI);
	double enYuksek = enYuksekSicakligiBul(sicakliklar, GUN_SAYISI);
	double enDusuk = enDusukSicakligiBul(sicakliklar, GUN_SAYISI);

	cout << "\n----HAFTALIK OZET ----" << endl;
	cout << "Haftalik ortalama: " << ortalama << " C " << endl;
	cout << "En yuksek sicaklik: " << enYuksek << " C " << endl;
	cout << "En dusuk sicaklik: " << enDusuk << " C " << endl;

	double esik;
	cout << " \nKac derecenin ustundeki gun sayisini gormek istersiniz ? Esik degeri girin: ";
	cin >> esik;

	int gunSayisi = esikUstuGunSayisiBul(sicakliklar, GUN_SAYISI, esik);
	cout << esik << " derecenin ustunde " << gunSayisi << " gun var ." << endl;

	return 0;


}






