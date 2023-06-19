#include "include/mahasiswa.hpp"
using namespace std;


Mahasiswa::Mahasiswa(string Nama,string NRP,string Fakultas,string Jurusan,string HakAkses,string Password)
    : User(NRP, Password), Nama(Nama),Fakultas(Fakultas),Jurusan(Jurusan),HakAkses(HakAkses) {}

string Mahasiswa::getData() {
    return "Data Mahasiswa:\nNama: " + Nama + "\nNRP: " + nrp + "\nFakultas: " + Fakultas + "\nJurusan: " + Jurusan + "\nHak Akses: "+ HakAkses;
}
