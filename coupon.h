
//include string header
#ifndef COUPON_H
#define COUPON_H
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <algorithm>


using namespace std;

//creation of sale class
class coupon {

private:
    int CoupID;
    float sale;//percentage
    string clothType;
    int clothId;
    int limit;
    string clothType2;
    int clothId2;

public:
    coupon();
    coupon(int cid, double s, string T, int I, string T2, int I2, int L, int R);
    coupon(int t);
    int getCoupID();
    double getSale();    //percentage
};
#endif