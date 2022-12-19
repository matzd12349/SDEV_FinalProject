#ifndef SALESFUNC_H
#define SALESFUNC_H
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include "coupon.h"
#include "badCoupon.h"
#include "clothing.h"
#include "shoppingCart.h"

using namespace std;

class salesFunc: public coupon, badCoupon
{
public:
salesFunc();   //Constuctor that asks for date then calls calcDiscount(),       couponUsage(),and discountedTotal()
void calcDiscount(class shoppingCart((&cart)[20]));
salesFunc(class shoppingCart((&cCart)[20]),class shoppingCart((&sCart)[20]),
  int cTotal);
//calculates the discount and if coupon is allowed to be used based on date
void couponUsage(class shoppingCart((&cart)[20]));
void setDay(string d);       //sets day of the week as a string Monday, Tuesday, etc.
void setMonth(int x);        //sets month as an integer January = 1, February = 2, etc.
void setDate(int y);         //sets day as an integer 1, 2, 3, 4, etc.
void setYear(int z);         //sets year as a year 2020, 2021, 2022 etc. actual version would use #include <chrono>
string getDay();               //returns the value of dDay 
int getMonth();             //returns the value of dMonth
int getDate();              //returns the value of dDate
int getYear();              //returns the value of dYear
void setData(shoppingCart((&Cart)[20]),string d,int m,int t,int y);              //calls asks for input and calls functions set Day, set Month, setDate, setYear


private:
bool couponU = 1;    // flags couponUse = is coupons usable
bool fotm = 0;//Fotm = First of the month discount
string dDay;// day of the week..i.e. Monday, Tuesday, etc.(Discount Applied to "Friday")
string coup;// y/n answer for if using coupon. Accepts only 'y' & 'Y' as answers to apply coupon
int dDate;//date = this refers to the number of the day such as Chistmas is the December 25
int dMonth;//month = number if the month i.e. January = 1, February = 2
int dYear;//year = year if this needs explanation we have an issue
double saleP = 1.00;//This is the discount off of sets/items defaults at 100% of price, 25% off = 0.75

};

#endif

 