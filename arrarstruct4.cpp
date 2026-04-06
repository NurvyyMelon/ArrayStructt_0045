#include <iostream>
#include <string> // Tambahkan library string untuk keamanan
using namespace std;

struct AlamatDetail { // Menggunakan PascalCase agar lebih rapi
    string desa;
    string kota;
};

struct mahasiswa {
    string nama;
    AlamatDetail alamat; // Nama struct harus sama persis dengan definisinya
    int umur;
};

int main() {
    // Deklarasi variabel struct
    mahasiswa mhs;

     // mengisi data
    cout << "Isikan data nama : ";
    getline(cin, mhs.nama);

    cout << "Isikan data kota : ";
    getline(cin, mhs.alamat.kota);

    cout << "Isikan data desa : ";
    getline(cin, mhs.alamat.desa);

    cout << "Isikan data usia : ";
    cin >> mhs.umur;

    cout << endl;

    cout << "Data Mahasiswa" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Kota : " << mhs.alamat.kota << endl;
    cout << "Desa : " << mhs.alamat.desa << endl;
    cout << "Usia : " << mhs.umur << endl;
    
    return 0;
}