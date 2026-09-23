
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	const int SEHIR_SAYISI = 4;
	string sehirler[SEHIR_SAYISI] = { "Istanbul" , "Ankara" , " Izmir" , "Bursa" };

		//Sehirler arası mesafeler (km) , simetrik matris 
		int mesafeler[SEHIR_SAYISI][SEHIR_SAYISI] = {
			{ 0 , 450 , 480 , 150 },// Istanbul
			{ 450 ,  0, 580 , 400 },// Ankara
			{ 480 , 580 , 0 , 320 },// ızmir
			{ 150 , 400 , 320 , 0 } //Bursa
	};

	cout << "==== SEHIRLER ARASI MESAFE TABLOSU (km) =====" << endl;

	// Baslıkları yazdıralım
	cout << "\n" << setw(10) << " ";
	for (int i = 0; i < SEHIR_SAYISI; i++) {
		cout << setw(10) << sehirler[i];
	}
	cout << endl;

	//Her satiri sehir adiyla birlikte yazdiralim
	for (int satir = 0; satir < SEHIR_SAYISI; satir++) {
		cout << setw(10) << sehirler[satir];
		for (int sutun = 0; sutun < SEHIR_SAYISI; sutun++) {
			cout << setw(10) << mesafeler[satir][sutun];
		}
		cout << endl;
	}

	//Kullanıcıdaan iki sehir secip mesafeyi sormasını isteyelim
	int birinci, ikinci;
	cout << "\nSehirler : 0-Istanbul, 1-Ankara, 2-Izmir, 3-Bursa " << endl;
	cout << "Birinci sehri secin ( 0-3 ): ";
	cin >> birinci;
	cout << "Ikinci sehri secin (0-3): ";
	cin >> ikinci;

	cout << "\n" << sehirler[birinci] << " - " << sehirler[ikinci]
		<< " mesafesi: " << mesafeler[birinci][ikinci] << " km " << endl;

	return 0;
}