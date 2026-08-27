

#include <iostream>
using namespace std;

int main()
{
    int not_;
    char harfNotu;


    cout << " ==== NOT HESAPLAMA PROGRAMI ====" << endl;
    cout << "\n Sinav notunuzu girin ( 0 - 100 ): ";
    cin >> not_;

    if (not_ > 100 || not_ < 0) {
        cout << " \nHata : Not 0 ile 100 arasinda olmalidir!" << endl;
    }
    else if (not_ >= 90) {
        harfNotu = 'A';
        cout << " \nHarf notunuz : " << harfNotu << " (Mukemmel ! )" << endl;
    }
    else if (not_ >= 80) {
        harfNotu = 'B';
        cout << " \nHarf notunuz : " << harfNotu << "(Iyi)" << endl;
    }
    else if (not_ >= 70) {
        harfNotu = 'C';
        cout << " \nHarf notunuz : " << harfNotu << "(Orta)" << endl;
    }
    else if (not_ >= 60) {
        harfNotu = 'D';
        cout << " \nHarf notunuz : " << harfNotu << "(Gecti)" << endl;
    }
    else {
        harfNotu = 'F';
        cout << " \nHarf notunuz : " << harfNotu << "(Kaldi)" << endl;
    }
    return 0;
}

