
#include <iostream>
#include <fstream> // dosya islemleri icin gerekli kutuphane
#include <string>
using namespace std;

int main(){
	string yeniNot;

	cout << "===== NOT DEFTERI =====" << endl;

	cout << "\nYeni bir not girin: ";
	getline(cin, yeniNot);

	// DOSYAYA YAZMA: ofstream (output file stream) kullaniyoruz
	// ios::app = "append", yani dosyanin sonuna ekleme yapar, uzerine yazmaz 
	ofstream dosyaYaz("notlar.txt", ios::app);

	if (dosyaYaz.is_open()) {
		dosyaYaz << yeniNot << endl;
		dosyaYaz.close();
		cout << "Not kaydedildi!" << endl;
	}
	else {
		cout << "Hata: Dosya acilamadi!" << endl;
	}

	// DOSYADAN OKUMA: ifstream (input file stream) kullaniyoruz
	ifstream dosyaOku("notlar.txt");
	string satir;
	int sayac = 1;

	cout << "\n----- TUM NOTLAR -----" << endl;

	if (dosyaOku.is_open()) {
		while (getline(dosyaOku, satir)) {
			cout << sayac << ". " << satir << endl;
			sayac++;
		}
		dosyaOku.close();
	}
	else {
		cout << "Hata: Dosya acilamadi!" << endl;
	}

	return 0;


}

