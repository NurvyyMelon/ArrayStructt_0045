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

    // Mengisi data
    cout << "Isikan data nama : ";
    // Menggunakan getline agar bisa membaca nama dengan spasi
    getline(cin >> ws, mhs.nama); 

    cout << "Isikan data kota : ";
    cin >> mhs.alamat.kota;

    cout << "Isikan data desa : ";
    cin >> mhs.alamat.desa;

    cout << "Isikan data usia : ";
    cin >> mhs.umur;

    cout << "\n--- Data Mahasiswa ---" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Kota : " << mhs.alamat.kota << endl;
    cout << "Desa : " << mhs.alamat.desa << endl;
    cout << "Usia : " << mhs.umur << " tahun" << endl;

    return 0;
}