#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include "salesFunc.h"

using namespace std;

class shoppingCart: public salesFunc
{
public:
shoppingCart();//Constructor to make shopping cart   
shoppingCart(string t1,int i1,string t2,int i2,int l,int R );// coupon information
void addItem(shoppingCart((&Cart)[20]), int aTYPE, int& ID, int c);//putting item number in returns that item
shoppingCart(shoppingCart((&Cart)[20]),int& aType, int&  ID);
shoppingCart(string Type, int Id, int cTotal);
void emptyCart(shoppingCart((&cart)[20]));   //uses itemSelection to determine totalSales
shoppingCart(shoppingCart((&Cart)[20]), string name, string type, int id,int qty, double price );
void checkCart(shoppingCart((&cart)[20]));             //shows items presently in cart
double coupon(shoppingCart((&Cart)[20]), shoppingCart((&cart)[20]),string t1,int i1,string t2,int i2,int l,int R );
void setItem(shoppingCart((&cart)[20]), int& x);//places item into cart
void removeItem(shoppingCart((&cart)[20]),int& y);//removes item from cart
double discountedTotal(shoppingCart((&Cart)[20]), shoppingCart((&cart)[20]) );
void calcDiscount(shoppingCart((&cart)[20]));

void setName(string name);
void setType(string type);
void setId(int id);
void setPrice(double price);
void setQty(int qty);
void setCartTotal(int cTotal);
void setShippingCost(double sC);
void setAddTS(double price);
void setSubTS(double price);
void setData(shoppingCart((&Cart)[20]),string& d,int& m,int& t,int& y);              //calls asks for input and calls functions set Day, set Month, setDate, setYear
void setCTotal(int c);
void setShirts(int s);
void setPants(int p);
void setTotalSets(int s);
void setDiscItems(int d);

void setDay(string d);
void setMonth(int m);
void setDate(int t);
void setYear(int t);

bool getCouponU();
double getTotalSales();
string getName();
string getType();
int getId();
double getPrice();
int getQty();
int temp;            //holds tempreary values
int getCTotal();
double getShippingCost();

string getDay();               //returns the value of dDay 
int getMonth();             //returns the value of dMonth
int getDate();              //returns the value of dDate
int getYear();              //returns the value of dYear
int getShirts();
int getPants();
int getTotalSets();
int getDiscItems();
bool getFotm();
int cartTotal = 0;
private:

int Qty = 0;      // number requested
double Price = 00.00;  // item price
int Id = 0;    //item ClothID
string Name = ""; //item name
string Type = ""; //item Type

double totalSales;
double shippingCost = totalSales * .08;
bool couponU = 1;    // flags couponUse = is coupons usable
bool fotm = 0;//Fotm = First of the month discount
string dDay;// day of the week..i.e. Monday, Tuesday, etc.(Discount Applied to "Friday")
string coup;// y/n answer for if using coupon. Accepts only 'y' & 'Y' as answers to apply coupon
int dDate;//date = this refers to the number of the day such as Chistmas is the December 25
int dMonth;//month = number if the month i.e. January = 1, February = 2
int dYear;//year = year if this needs explanation we have an issue
  double saleP = 1.00;//This is the discount off of sets/items defaults at 100% of price, 25% off = 0.75
int shirts;
int pants;
int totalSets;
int discItems;
};
#endif