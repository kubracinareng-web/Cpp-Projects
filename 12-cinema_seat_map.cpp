

#include <iostream>
using namespace std;

int main() {
	const int SATIR = 3;
	const int SUTUN = 3;

	// 2 BOYUT DIZI : satir ve sutun olarak düşün
	int koltuklar[SATIR][SUTUN] = {
		{0 , 0 , 0},
		{0 , 0 , 0},
		{0 , 0 , 0}
	};

	cout << " ===== SINEMA SALONU KOLTUK DUZENI =====" << endl;

	// Koltuk haritasını yazdiralim
	cout << "\nMevcut koltuk durumu (0 = bos , 1 = dolu):" << endl;
	for (int satir = 0; satir < SATIR; satir++) {
		for (int sutun = 0; sutun < SUTUN; sutun++) {
			cout << koltuklar[satir][sutun] << " ";
		}
		cout << endl; // her satir bitince alt satira gec
	}

	// Kullanicidan bir koltuk secmesini isteyelim
	int secilenSatir, secilenSutun;
	cout << "\nAyrilmak istediginiz koltugun satirini girin (0-2): ";
	cin >> secilenSatir;
	cout << "Ayrilmak istediginiz koltugun sutununu girin (0-2): ";
	cin >> secilenSutun;

	if (koltuklar[secilenSatir][secilenSutun] == 1) {
		cout << "\nBu koltuk zaten dolu!" << endl;
	}
	else {
		koltuklar[secilenSatir][secilenSutun] = 1;
		cout << "\nKoltuk basariyla ayrildi!" << endl;
	}

	//Guncel haritayı tekrar yazdiralim
	cout << "\nGuncel koltuk durumu:" << endl;
	for (int satir = 0; satir < SATIR; satir++) {
		for (int sutun = 0; sutun < SUTUN; sutun++) {
			cout << koltuklar[satir][sutun] << " ";
		}
		cout << endl;
	}

	return 0;
}




