#include"include/user.hpp"


User::User(string nrp,string password)
    : nrp(nrp), password(password) {}


bool User::checkCredentials(string nrp, string password) {
    return (this->nrp == nrp && this->password == password);
}
