#ifndef ORANG_HPP
#define ORANG_HPP
#include<string>

using namespace std;

class User{
    public:
    string nrp;
    string password;
    public:
    User(string nrp,string password);
    virtual string getData() = 0;
    bool checkCredentials(string nrp,string password);
};
#endif