#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include "badCoupon.h"

using namespace std;


  badCoupon::badCoupon(){ message = " Coupon not valid on from 1st thru 3rd and/or Fridays";} // constructor for error code
  string badCoupon::what(){ return message;} //function to send error message
