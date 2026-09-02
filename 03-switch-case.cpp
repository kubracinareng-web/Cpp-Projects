

#include <iostream>
using namespace std;

int main() {
    int secim;
    double fiyat;

    cout << "==== KAFE SIPARIS SISTEMI ====" << endl;
    cout << "\n1. Turk Kahvesi - 120 TL" << endl;
    cout << "2. Filtre Kahve   - 150 TL" << endl;
    cout << "3. Cay             - 40 TL" << endl;
    cout << "4. Limonata        - 90 TL" << endl;
    cout << "5. Su              - 30 TL" << endl;

    cout << "\nNe Siparis etmek istersiniz?  ( 1-5 ):";
    cin >> secim;

    switch (secim) {
    case 1 :
        fiyat = 120;
        cout << "\nSiparisiniz : Turk Kahvesi" << endl;
        cout << "Tutar : " << fiyat << " TL " << endl;
        break;

    case 2 :
        fiyat = 150;
        cout << "\nSiparisiniz : Filtre Kahve" << endl;
        cout << " Tutar " << fiyat << " TL " << endl;
        break;


    case 3:
        fiyat = 40;
        cout << "\nSiparisiniz : Cay" << endl;
        cout << "Tutar "<< fiyat << " TL " << endl;
        break;

    case 4:
        fiyat = 90;
        cout << "\nSiparisiniz :  Limonata" << endl;
        cout << "Tutar " << fiyat << " TL " << endl;
        break;

    case 5 :
        fiyat = 30;
        cout << "\nSiparisiniz : Su" << endl;
        cout << " Tutar " << fiyat << " TL " << endl;
        break;

    default :
        cout << "\nHata : gecersiz secim ! Lutfen 1 ile 5 arasinda bir sayi girin." << endl;
        break;
     }

    return 0;
}

    


