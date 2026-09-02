
#include <iostream>
using namespace std;


int main() {
	int kategori;
	double harcamaTutari, puanOrani, kazanilanPuan;
	double toplamHarcama = 0, toplamPuan = 0;
	int harcamaSayisi = 0;
	string devamMi = "yes";

	cout << "==== ALISVERIS PUANI HESAPLAYICI ====" << endl;

	while (devamMi == "yes") {

		cout << "\n1. Market" << endl;
		cout << "2. Giyim" << endl;
		cout << "3. Yakit" << endl;
		cout << "4. Elektronik" << endl;
		cout << "5. Diger" << endl;

		cout << "\nHarcama kategorisini secin ( 1-5 ): ";
		cin >> kategori;

		switch (kategori) {
		case 1:
			puanOrani = 0.02; // %2 puan
			cout << "\nKategori : Market" << endl;
			break;

		case 2:
			puanOrani = 0.05; // %5 puan
			cout << "\nKategori : Giyim" << endl;
			break;

		case 3:
			puanOrani = 0.01; // %1 puan
			cout << "\nKategori : Yakit" << endl;
			break;

		case 4:
			puanOrani = 0.03; // %3 puan
			cout << "\nKategori : Elektronik" << endl;
			break;

		case 5 :
			puanOrani = 0.01; // %1 puan
			cout << "\nKategori : Diger" << endl;
			break;

		default:
			puanOrani = 0;
			cout << "\nHata : Gereksiz kategori ! Bu harcama hesaba eklenmeyecek." << endl;
			break;
		}

		// Sadece bir kategori secildiyse tutarı sor

		if (kategori >= 1 && kategori <= 5) {
			cout << "Harcama tutarini girin (TL):";
			cin >> harcamaTutari;

			kazanilanPuan = harcamaTutari * puanOrani;

			toplamHarcama = toplamHarcama + harcamaTutari;
			toplamPuan = toplamPuan + kazanilanPuan;
			harcamaSayisi = harcamaSayisi + 1;

			cout << "Bu harcamadan kazanilan puan: " << kazanilanPuan << endl;
			cout << "Su ana kadarki toplam puan: " << toplamPuan << endl;
		}

		cout << "\nBaska bir harcama eklemek istiyor musunuz? ( yes / no ) : ";
		cin >> devamMi;
     }

	// OZET
	cout << "\n==== HARCAMA OZETI ====" << endl;
	cout << "Toplam harcama sayisi:" << harcamaSayisi << endl;
	cout << "Toplam harcama tutari:" << toplamHarcama << "TL" << endl;
	cout << "Toplam kazanilan puan:" << toplamPuan << endl;

	// -----SEVIYE BELİRLEME -----
	string seviye;
	if (toplamPuan >= 100) {
		seviye = "Altin Uye";
	}
	else if (toplamPuan >= 50) {
		seviye = "Gumus Uye";
	}
	else if (toplamPuan >= 20) {
		seviye = "Bronz Uye";
	}
	else {
		seviye = "Standart Uye";
	}

	cout << "Uyelik Seviyeniz: " << seviye << endl;

	// -----PUAN GORSELLESTİRME -----
	int yildizSayisi = toplamPuan / 10; // her puana 10 bir yildiz

	if (yildizSayisi > 0) {
		cout << "Puan seviyeniz: ";
		for (int i = 1; i <= yildizSayisi; i++) {
			cout << "* ";
		}
		cout << endl;
	}
	cout << "\nTesekkur ederiz, iyi gunler!" << endl;

	return 0;
    
}
