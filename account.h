#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

using std::string;
using std::cout;


class Account{

    public:
    Account();

    private:
    string userName;
    string email;
    string passWord;

};

#endif