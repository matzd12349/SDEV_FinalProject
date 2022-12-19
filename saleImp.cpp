//include the sale header file
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include "sale.h"
using namespace std;

//create sale object
sale::sale(){
    SaleID = 0;
    ClothID = 0;
    saleP = 0.0;
}

//create or change sale object
sale::sale(int sid, int cid, double s){
    SaleID = sid;
    ClothID = cid;
    saleP = s;
}

//return values for sale object
int sale::getSaleID(){return SaleID;}
int sale::getClothID(){return ClothID;}
float sale::getSale(){return saleP;}