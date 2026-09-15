

#include <iostream>
using namespace std;

int main() {
	const int DIZI_BOYUTU = 5;
	int sayilar[DIZI_BOYUTU];

	cout << "===== DIZIYI TERSTEN YAZDIRMA ====" << endl;

	// Diziyi kullanicidan alalım
	cout << "\n " << DIZI_BOYUTU << "tane sayi girin :" << endl;
	for (int i = 0; i < DIZI_BOYUTU; i++) {
		cout << (i + 1) << ". sayi: ";
		cin >> sayilar[i];
	}

	// 1. Normal sirada yazdıralım
	cout << "\nNormal sirada: ";
	for (int i = 0; i < DIZI_BOYUTU; i++) {
		cout << sayilar[i] << " ";
    }
	cout << endl;

	// 2. Sadece tersten okuyup yazdiralim (diziyi değiştirmeden)
	cout << "\nTers Sirada (sadece yazdirma): ";
	for (int i = DIZI_BOYUTU - 1; i >= 0; i--) {
		cout << sayilar[i] << " ";
	}
	cout << endl;

	// 3. Diziyi gercekten tersine cevirelim (swap tekniği ile)
	for (int i = 0; i < DIZI_BOYUTU / 2; i++) {
		int gecici = sayilar[i];
		sayilar[i] = sayilar[DIZI_BOYUTU - 1 - i];
		sayilar[DIZI_BOYUTU - 1 - i] = gecici;
	}

	cout << "Dizi gercekten tersine cevrildi: ";
	for (int i = 0; i < DIZI_BOYUTU; i++) {
		cout << sayilar[i] << " ";
	}
	cout << endl;
	
	return 0;
}


