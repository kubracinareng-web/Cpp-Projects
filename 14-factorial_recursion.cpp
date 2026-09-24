
#include <iostream>
using namespace std;

//Bu fonksiyon KENDI KENDINI cagiriyor - buna "ozyineleme (recursion) " denir
long long faktoriyel(int n) {
	//TABAN DURUM (base case): dongunun/cagrilarin ne zaman durdugu
	if (n == 0 || n == 1) {
		return 1;
	}

	//OZYINELI ADIM: fonksiyon kendini, bir kucuk sayiyla tekrar cagiriyor
	return n * faktoriyel(n - 1);
}

int main() {
	int sayi;

	cout << "===== OZYINELEMELI FAKTORIYEL HESAPLAYICI =====" << endl;
	cout << "\nFaktoriyelini hesaplamak istediginiz sayiyi girin: ";
	cin >> sayi;

	long long sonuc = faktoriyel(sayi);

	cout << "\n" << sayi << "! = " << sonuc << endl;

	return 0;
}

