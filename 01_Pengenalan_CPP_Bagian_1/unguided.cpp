//1
#include <iostream>
/*using namespace std;

int main() {
    float num1, num2;
    cout << "Masukkan dua angka (pisahkan dengan spasi): ";
    cin >> num1 >> num2;

    cout << "Penjumlahan: " << num1 + num2 << endl;
    cout << "Pengurangan: " << num1 - num2 << endl;
    cout << "Perkalian: " << num1 * num2 << endl;
    cout << "Pembagian: " << num1 / num2 << endl;

    return 0;
}*/

//2
#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk mengubah angka menjadi kata
/*string numberToWords(int num) {
    string belowTen[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
    string belowTwenty[] = {"sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};
    string belowHundred[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};

    if (num < 10)
        return belowTen[num];
    else if (num < 20)
        return belowTwenty[num - 10];
    else if (num <= 100) {
        if (num % 10 == 0)
            return belowHundred[num / 10];
        else
            return belowHundred[num / 10] + " " + belowTen[num % 10];
    }
    return "Invalid";
}

int main() {
    int number;
    cout << "Masukkan angka (0-100): ";
    cin >> number;

    if (number >= 0 && number <= 100)
        cout << number << " : " << numberToWords(number) << endl;
    else
        cout << "Angka diluar jangkauan!" << endl;

    return 0;
}*/


//3
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan angka: ";
    cin >> n;

    for (int i = n; i >= 1; --i) {
        for (int j = i; j >= 1; --j) {
            cout << j << " ";
        }
        for (int k = 1; k <= i; ++k) {
            cout << k << " ";
        }
        cout << endl;
    }

    return 0;
}

