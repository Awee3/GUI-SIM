#ifndef DOSEN_HPP
#define DOSEN_HPP
#include "user.hpp"

using namespace std;

class Dosen : public User {
        private :
        string Nama;
        string NRP;
        string MatKul;
        string HakAkses;
        string Password;
        public:
        Dosen(string Nama,string NRP,string MatKul,string HakAkses,string Password);
        string getData() override;
        
    };
#endif