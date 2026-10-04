

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	string aciklama;
	double tutar;

	cout << "\nHarcama aciklamasi girin: ";
	getline(cin, aciklama);

	cout << "Tutar girin (TL): ";
	cin >> tutar;

	//Dosyaya hem metni hem sayiyi ayni satirda , aralarinda bosluk birakarak yaziyoruz
	ofstream dosyaYaz("harcamalar.txt", ios::app);
	if (dosyaYaz.is_open()) {
		dosyaYaz << aciklama << " " << tutar << endl;
		dosyaYaz.close();
		cout << "Harcama kaydedildi!" << endl;
	}

	//simdi dosyadaki TUM harcamalari okuyup toplamini hesaplayalim
	ifstream dosyaOku("harcamalar.txt");
	string okunanAciklama;
	double okunanTutar;
	double toplam = 0;
	int sayac = 1;

	cout << "\n------ TUM HARCAMALAR ------" << endl;

	// >> operatoru bosluga kadar okur , bu yuzden aciklama tek kelime olmali
	while (dosyaOku >> okunanAciklama >> okunanTutar) {
		cout << sayac << ". " << okunanAciklama << " - " << okunanTutar << " TL " << endl;
		toplam = toplam + okunanTutar;
		sayac++;
	}
	dosyaOku.close();

	cout << "\nToplam harcama: " << toplam << " TL " << endl;

	return 0;

}
