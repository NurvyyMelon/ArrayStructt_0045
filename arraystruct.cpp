#include <iostream>
using namespace std;

int main()
{
     // deklarasi array disertai inisialisasi
    int dataku[5] = {10, 20, 30, 40, 50};

    // deklarasi tanpa inisialisasi
    int datamu[5];

    // cara akses (membaca atau mengambil isi array)
    cout << "Isi data kedua : " << dataku[1] << endl;

       // mengisi array
    dataku[1] = 200;
    cout << "Isi data kedua setelah dirubah : " << dataku[1] << endl;

     // mengisi data dengan perintah satu persatu
    cout << "Isikan data pertama : ";
    cin >> datamu[0];
    cout << "Isikan data kedua : ";
    cin >> datamu[1];
      cout << "Isikan data ketiga : ";
    cin >> datamu[2];
      cout << "Isikan data keempat : ";
    cin >> datamu[3];
    cout << "Isikan data kelima : ";
    cin >> datamu[4];

     // menampilkan data dengan perintah satu persatu
    cout << "data pertama = " << datamu[0] << endl;
    cout << "data kedua = " << datamu[1] << endl;
    cout << "data ketiga = " << datamu[2] << endl;
    cout << "data keempat = " << datamu[3] << endl;
    cout << "data kelima = " << datamu[4] << endl;
     // menampilkan data dengan perulangan
    for (int i = 0; i <= 4; i++)