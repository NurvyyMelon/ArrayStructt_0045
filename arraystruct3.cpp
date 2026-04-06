#include <iostream>
using namespace std;

struct Alamatdetail
{
    string desa;
    string kota;
};
struct mahasiswa
{
    string nama;
    alamatDetail alamat;
    int umur;
};

int main()
{
    // deklarasi variable struct
    mahasiswa mhs;
      // mengisi data
    cout << "Isikan data nama : ";
    cin >> mhs.nama;
    cout << "Isikan data kota : ";
    cin >> mhs.alamat.kota;
    cout << "Isikan data desa : ";
    cin >> mhs.alamat.desa;
    cout << "Isikan data usia : ";
    cin >> mhs.umur;