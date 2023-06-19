#include "include/dosen.hpp"
using namespace std;

Dosen::Dosen(string Nama,string NRP,string MatKul,string HakAkses,string Password)
    : User(NRP, Password), Nama(Nama),NRP(NRP),MatKul(MatKul),HakAkses(HakAkses),Password(Password) {}

string Dosen::getData() {
    return "Data Dosen:\nNama: " + Nama + "\nNRP: " + nrp + "\nMata Kuliah: " + MatKul + "\nHak Akses: " + HakAkses;
}
