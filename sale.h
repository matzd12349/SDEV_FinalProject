#ifndef SALE_H
#define SALE_H
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <algorithm>




using namespace std;

//creation of sale class
class sale
{

private:
    int SaleID;
    int ClothID;
    double saleP;     //percentage

public:
    sale();
    sale(int sid, int cid, double s);
    int getSaleID();
    int getClothID();
    float getSale();    //percentage
};
#endif