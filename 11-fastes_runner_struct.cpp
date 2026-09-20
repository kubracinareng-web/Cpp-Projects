
#include <iostream>
#include <string>
using namespace std;

struct Kosucu {
	string ad;
	double sure; // saniye cinsinden
};

// En hizli kosuyucu (en dusuk sureyi) bulan fonksiyon
Kosucu enHizliyiBul(Kosucu kosucular[], int boyut) {
	Kosucu enHizli = kosucular[0];
	for (int i = 1; i < boyut; i++) {
		if (kosucular[i].sure < enHizli.sure) {
			enHizli = kosucular[i];
		}
	}
	return enHizli;
}

int main() {
	const int KOSUCU_SAYISI = 3;
	Kosucu kosucular[KOSUCU_SAYISI];

	cout << "=====KOSU YARISI SONUC SISTEMI ====" << endl;

	for (int i = 0; i < KOSUCU_SAYISI; i++) {
		cout << "\n--- " << (i + 1) << " . kosucu ---" << endl;

		cout << "Ad: ";
		getline(cin, kosucular[i].ad);

		cout << "Sure (saniye): ";
		cin >> kosucular[i].sure;
		cin.ignore();
	}

	cout << "\n----- YARIS SONUCLARI -----" << endl;
	for (int i = 0; i < KOSUCU_SAYISI; i++) {
		cout << kosucular[i].ad << ": " << kosucular[i].sure << " saniye" << endl;
    }

	Kosucu kazanan = enHizliyiBul(kosucular, KOSUCU_SAYISI);

	cout << "\nYarisin birincisi: " << kazanan.ad
		<< " (" << kazanan.sure << " saniye)" << endl;

	return 0;
}




