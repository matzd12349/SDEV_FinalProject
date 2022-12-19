//include the sale header file
#include "account.h"

//create account object
account::account(){
    AcctID = 0;
    name = "N/A";
}

//create or change account object
account::account(int aid, string n){
    AcctID = aid;
    name = n;
}

//return values for sale object
int account::getAcctID(){return AcctID;}
string account::getName(){return name;}
