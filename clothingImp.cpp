//include the clothing header file
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include "clothing.h"

using namespace std;

//create clothing object
clothing::clothing()
{
    clothId = 0;
    type = "";
    name = "";
    price = 0.00;
    quantity = 0;
}

//create or change clothing object
clothing::clothing(string& t, int& id, string& n, double& p) {
     setId(id);
     setType(t);
     setName(n);
     setPrice(p);
    
}

void clothing::setName(string Name){name = Name;}
void clothing::setType(string Type){type = Type;}
void clothing::setId(int id){clothId = id;}
void clothing::setPrice(double Price){price = Price;}
void clothing::setQty(int qty){quantity = qty;}

//retrieve information about clothing object
int clothing::getclothId(){return clothId;}
string clothing::getType(){return type;}
string clothing::getName(){return name;}
double clothing::getPrice(){return price;}
int clothing::getQuantity(){return quantity;}
