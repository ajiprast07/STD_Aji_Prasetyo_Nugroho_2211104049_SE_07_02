
//1
/*#include <iostream>
using namespace std;

int main() {
    string nama;      // Deklarasi variabel nama dengan tipe string
    int nim;          // Deklarasi variabel nim dengan tipe integer

    cout << "Siapa nama anda? ";
    getline(cin, nama);  // Menggunakan getline untuk mengambil input string (nama lengkap)

    cout << "Berapa nim anda? ";
    cin >> nim;  // Input untuk nim

    cout << "Nama saya: " << nama << endl;
    cout << "NIM saya: " << nim << endl;

    return 0;
}*/

//2
/*#include <iostream>
using namespace std;

int main() {
    int bil1 = 3, bil2 = 4, hasil1;
    float bil3 = 3.0, bil4 = 4.0, hasil2;

    // Penjumlahan bilangan bulat
    hasil1 = bil1 + bil2;
    cout << "Hasil penjumlahan bil1 + bil2: " << hasil1 << endl;

    // Pengurangan bilangan bulat
    hasil1 = bil1 - bil2;
    cout << "Hasil pengurangan bil1 - bil2: " << hasil1 << endl;

    // Perkalian bilangan bulat
    hasil1 = bil1 * bil2;
    cout << "Hasil perkalian bil1 * bil2: " << hasil1 << endl;

    // Pembagian bilangan bulat (integer division)
    hasil1 = bil1 / bil2;
    cout << "Hasil pembagian bil1 / bil2 (integer division): " << hasil1 << endl;

    // Pembagian bilangan bulat
    hasil1 = bil2 / bil1;
    cout << "Hasil pembagian bil2 / bil1 (integer division): " << hasil1 << endl;

    // Modulo bilangan bulat
    hasil1 = bil1 % bil2;
    cout << "Hasil bil1 % bil2 (modulo): " << hasil1 << endl;

    hasil1 = bil2 % bil1;
    cout << "Hasil bil2 % bil1 (modulo): " << hasil1 << endl;

    // Operasi aritmatika pada bilangan pecahan (float)
    hasil2 = bil3 / bil4;
    cout << "Hasil bil3 / bil4 (float division): " << hasil2 << endl;

    return 0;
}*/

//3
/*#include <iostream>
using namespace std;

int main() {
    int bil1 = 2, bil2 = 3, hasil;

    hasil = bil1 > bil2;
    cout << "bil1 > bil2: " << hasil << endl;
    hasil = bil1 < bil2;
    cout << "bil1 < bil2: " << hasil << endl;
    hasil = bil1 >= bil2;
    cout << "bil1 >= bil2: " << hasil << endl;
    hasil = bil1 <= bil2;
    cout << "bil1 <= bil2: " << hasil << endl;
    hasil = bil1 == bil2;
    cout << "bil1 == bil2: " << hasil << endl;
    hasil = bil1 != bil2;
    cout << "bil1 != bil2: " << hasil << endl;

    return 0;
}*/

//4
/*#include <iostream>
using namespace std;

int main() {
    int bil1 = 2, bil2 = 3, hasil;
    hasil = (bil1 < bil2) && (bil1 < bil2);
    cout << "Hasil dari (bil1 < bil2) AND (bil1 < bil2): " << hasil << endl;
    hasil = (bil1 >= bil2) || (bil1 < bil2);
    cout << "Hasil dari (bil1 >= bil2) OR (bil1 < bil2): " << hasil << endl;
    hasil = !(bil1 >= bil2) || (bil1 < bil2);
    cout << "Hasil dari NOT (bil1 >= bil2) OR (bil1 < bil2): " << hasil << endl;

    return 0;
}*/

//5
/*#include <iostream>
using namespace std;

int main() {
    int nilai;
    cout << "Masukkan nilai: ";
    cin >> nilai;
    if (nilai > 80) {
        cout << "A" << endl;
    } else {
        cout << "Bukan A" << endl;
    }

    return 0;
}*/

//6
/*#include <iostream>
using namespace std;

int main() {
    int a, b, bilangan;
    cout << "Masukkan batas bawah: ";
    cin >> a;
    cout << "Masukkan batas atas: ";
    cin >> b;
    for (bilangan = a; bilangan <= b; bilangan++) {
        cout << "Bilangan " << bilangan << endl;
    }

    return 0;
}*/

//7
/*#include <iostream>
using namespace std;

int main() {
    int bilangan, asli, jumlah;
    cout << "Masukkan bilangan asli: ";
    cin >> asli;
    bilangan = 1;
    jumlah = 0;
    while (bilangan <= asli) {
        if (bilangan % 2 == 0) {
            jumlah += bilangan;
        }
        bilangan++;
    }
    cout << "Jumlah bilangan genap: " << jumlah << endl;

    return 0;
}*/
