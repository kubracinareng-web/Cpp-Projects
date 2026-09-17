
#include <iostream>
using namespace std;

// Her dönüşüm için ayrı fonksiyon
double celsiusToFahrenheit(double c) {
	return (c * 9.0 / 5.0) + 32;
}

double fahrenheitToCelcius(double f) {
	return (f - 32) * 5.0 / 9.0;
}

double celsiusToKelvin(double c) {
	return c + 273.15;
}

double kelvinToCelcius(double k) {
	return k - 273.15;
}

int main() {
	int secim;
	double deger, sonuc;
	string devamMi = "yes";

	cout << " ===== SICAKLIK DONUSTUCU ===== " << endl;

	while (devamMi == "yes") {

		cout << "\n1. Celcius -> Fahrenheit" << endl;
		cout << "\n2. Fahrenheit -> Celcius" << endl;
		cout << "\n3. Celcius -> Kelvin" << endl;
		cout << "\n4. Kelvin -> Celcius" << endl;

		cout << "\nBir islem secin ( 1-4 ):";
		cin >> secim;

		cout << "Donusturulecek degeri girin: ";
		cin >> deger;

		switch (secim) {
		case 1:
			sonuc = celsiusToFahrenheit(deger);
			cout << "\n" << deger << "Celcius = " << sonuc << " Fahrenheit" << endl;
			break;

		case 2:
			sonuc = fahrenheitToCelcius(deger);
			cout << "\n" << deger << "Fahrenhait = " << sonuc << "Celcius" << endl;
			break;

		case 3:
			sonuc = celsiusToKelvin(deger);
			cout << "\n" << deger << " Celcius = " << sonuc << "Kelvin" << endl;
			break;

		case 4:
			sonuc = kelvinToCelcius(deger);
			cout << "\n" << deger << "Kelvin = " << sonuc << "Celcius" << endl;
			break;

		default :
			cout << "\n Gecersiz secim ! Lutfen 1 ile 4 arasinda bir sayi girin." << endl;
			break;
		}

		cout << "\nBaska bir donusum yapmak istiyormusnuz? (yes / no ): ";
		cin >> devamMi;
	}
	cout << "\nProgram sonlandirildi. Iyi calismalar !" << endl;
	return 0;

}


