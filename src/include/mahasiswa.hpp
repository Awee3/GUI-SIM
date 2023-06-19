#ifndef MAHASISWA_HPP
#define MAHASISWA_HPP
#include "user.hpp"

using namespace std;

    class Mahasiswa : public User{
        private :
        string Nama;
        string NRP;
        string Fakultas;
        string Jurusan;
        string HakAkses;
        string Password;
        public:
        Mahasiswa(string Nama,string NRP,string Fakultas,string Jurusan,string HakAkses,string Password);   
        string getData() override;     
    };

#endif