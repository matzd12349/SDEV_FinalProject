#ifndef ACCOUNT_H
#define ACCOUNT_H
//include string header
#include <string>
using std::string;

//creation of sale class
class account {

private:
    int AcctID;
    string name;

public:
    account();
    account(int aid, string n);
    int getAcctID();
    string getName();
};
#endif