#ifndef TENDIK_HPP
#define TENDIK_HPP
#include "user.hpp"

using namespace std;

    class Tendik : public User {
        private :
        string Nama;
        string NRP;
        string HakAkses;
        string Password;
        public:
        Tendik(string Nama,string NRP,string HakAkses,string Password);
        string getData() override;
    };

#endif