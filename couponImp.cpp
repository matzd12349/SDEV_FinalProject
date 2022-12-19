//include the sale header file
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include "coupon.h"

using namespace std;


//create coupon object
coupon::coupon(){
    CoupID = 0;
    sale = 0.0;
}

//create or change coupon object
coupon::coupon(int cid, double s, string T, int I, string T2, int I2, int L, int R)
{
    CoupID = cid;
    sale = s;
    clothId = I;
    clothType = T;
    clothType2 = T2;
    clothId2 = I2;
    limit = L;
    int Qty = R;
    
  }

//return values for sale object
int coupon::getCoupID(){return CoupID;}
double coupon::getSale(){return sale;}

