
#include <iostream>
#include <string>
using namespace std;

//STRUCT: Farklı türde bilgileri bir paket altında topluyoruz
struct Kitap {
	string ad;
	string yazar;
	int sayfaSayisi;
	double fiyat;
};

const int KITAP_SAYISI = 3;

//Struct'i parametre olarak alan fonksiyon - bir kitabın bilgilerini yazdırır
void kitapBilgisiYazdir(Kitap kitap) {
	cout << "Kitap Adi: " << kitap.ad << endl;
	cout << "Yazar: " << kitap.yazar << endl;
	cout << "Sayfa Sayisi: " << kitap.sayfaSayisi << endl;
	cout << "Fiyat: " << kitap.fiyat << " TL"<< endl;
}

//Struct dizisini parametre olarak alan fonksiyon - toplam fiyati hesaplar
double toplamFiyatHesapla(Kitap kitaplar[], int boyut) {
	double toplam = 0;
	for (int i = 0; i < boyut; i++) {
		toplam = toplam + kitaplar[i].fiyat;
	}
	return toplam;
}


int main() {
	Kitap kutuphane[KITAP_SAYISI];

	cout << "===== KITAP KUTUPHANESI SISTEMI =====" << endl;

	cout << "\n" << KITAP_SAYISI << " kitap bilgisi girin: " << endl;

	for (int i = 0; i < KITAP_SAYISI; i++) {
		cout << "\n---" << (i + 1) << " . kitap ---" << endl;

		cout << "Kitap adi: ";
		getline(cin, kutuphane[i].ad);

		cout << "Yazar: ";
		getline(cin, kutuphane[i].yazar);

		cout << "Sayfa sayisi: ";
		cin >> kutuphane[i].sayfaSayisi;

		cout << "Fiyat: ";
		cin >> kutuphane[i].fiyat;

		cin.ignore(); // fiyattan sonra kalan enter tuşunu temizle (bir sonraki getline için)											
    }

	cout << "\n===== KUTUPHANE LISTESI =====" << endl;
	for (int i = 0; i < KITAP_SAYISI; i++) {
		cout << "\n--- " << (i + 1) << ". kitap ---" << endl;
		kitapBilgisiYazdir(kutuphane[i]);
	}

	double toplamFiyat = toplamFiyatHesapla(kutuphane, KITAP_SAYISI);
	cout << "\nTum kitaplarin toplam fiyati: " << toplamFiyat << " TL" << endl;

	return 0;
}


