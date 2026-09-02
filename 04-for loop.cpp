

#include <iostream>
using namespace std;;

int main() {
	int sayi;

	cout << "==== CARPIM TABLOSU =====" << endl;
	cout << "\nBir sayi girin : ";
	cin >> sayi;

	cout << "\n" << sayi << " sayisinin carpim tablosu : " << endl;

	for (int i = 1; i <= 100 ; i++) {
		cout << sayi << " x " << i << " = " << (sayi * i) << endl;
	}
	return 0;
}




