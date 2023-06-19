#include "include/tendik.hpp"
using namespace std;
Tendik::Tendik(string Nama,string NRP,string HakAkses,string Password)
    : User(NRP, Password), Nama(Nama),NRP(NRP),HakAkses(HakAkses) {}

string Tendik::getData()  {
    return "Data Tendik:\nNama: " + Nama + "\nNRP: " + nrp + "\nHak Akses: " + HakAkses;
}
