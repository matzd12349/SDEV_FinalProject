#ifndef BADCOUPON_H
#define BADCOUPON_H
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <algorithm>


using namespace std;


using namespace std;

class badCoupon
{
public:
    badCoupon();    // constructor error message
    string what(); //function to send error message
private:
    string message; // error message
    
};
#endif