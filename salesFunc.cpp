#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include "salesFunc.h"

using namespace std;



void salesFunc::calcDiscount(shoppingCart((&cart)[20]))
{ // Friday and First of month check

    if (dDate <= 3 && dDate > 0)   // checks to see if date is 3 or less
    {
       
        fotm = 1, couponU = 0; saleP = 0.70; cart[0].setDiscItems(10);

        
    }          // sets discount for first of month

    else if (dDay == "Friday")   // sets discount for Friday
    {
       
        saleP = 0.75, couponU = 0, cart[0].setDiscItems(998);
        
    }

    if (fotm == 1 && dDay == "Friday")
    {
        
        saleP = .65, cart[0].setDiscItems(999);
        
    } // default discount
    else if (fotm == 0 && dDay != "Friday")
    {
        
        saleP = 0.50;
        couponU = 1;
        

    }
}

void salesFunc::couponUsage(class shoppingCart((&cart)[20]))
{ // Friday and First of month check

    if (dDate <= 3 && dDate > 0)   // checks to see if date is 3 or less
    {
       
        fotm = 1, couponU = 0; saleP = 0.70; cart[0].setDiscItems(10);

        
    }          // sets discount for first of month

    else if (dDay == "Friday")   // sets discount for Friday
    {
       
        saleP = 0.75, couponU = 0, cart[0].setDiscItems(998);
        
    }

    if (fotm == 1 && dDay == "Friday")
    {
        
        saleP = .65, cart[0].setDiscItems(999);
        
    } // default discount
    else if (fotm == 0 && dDay != "Friday")
    {
        
        saleP = 0.50;
        couponU = 1;
        

    }

int id;
  
badCoup:  
      
    try
      {
            cout << "CouponUse is: " << couponU << endl;
            if (couponU == 1)
            {
                cout << "Do you have any coupons for this order? (y/n) ";
                cin >> coup;                  // inputs whether they have a coupon
                if (coup == "y" ||coup == "Y" ||coup == "Yes" ||coup == "yes" ||coup == "YES")
                    // asks if you have coupons
                {
                    if (couponU == 0 || fotm == 1)
                    {
                        throw badCoupon();
                    }
                    else
                    {
                    cout << "Please enter coupon id: " << endl;
                        cin >> id;
                          coupon coupon(id);
                      
                    }
                }
                           
            }
          
            else if(coup == "n" || coup == "N" || coup == "No" || coup == "no" ||coup == "NO")
            {
              cout << " No coupons applied";
              if(cart[0].getShirts() < cart[0].getPants())
              {
                cart[0].setDiscItems(cart[0].getShirts());
              }
              else
              {
                cart[0].setDiscItems(cart[0].getPants());
              }
              cout << "Total Discounted Items: " << cart[0].getDiscItems() << endl << "Discount: " 
              << (100 - (saleP * 100)) << "%" << endl;
              
            } // sets max of 3 items for 50% off discount based from total sets
            else
                    cout << "****You are ineligible for use of coupons***";
          }
    catch(badCoupon badCouponObj)
        {
          cout << badCouponObj.what() << endl;
          goto badCoup;
        }
  }
    //INPUT SELECTION SORT FOR DISCOUNTED SET ITEMS

salesFunc::salesFunc(shoppingCart((&cCart)[20]), shoppingCart((&sCart)[20]), int cTotal)
{    int M,dD,Y;
    string D;
    cout << "What day of the week is it?";
        cin >> D;
        cout << endl;
        cout << "What month is it?";
        cin >> M;
        cout << endl;
        cout << "What date is it?";
        cin >> dD;
        cout << endl;
        cout << "What year is it?"; 
        cin >> Y;
        cout << endl;
        cout << "The date is: " <<
          getDay() << ", " << getMonth() << "/"<< getDate() << "/"<<
          getYear() << endl;
        setData(sCart, D, M, dD, Y);
}        

void salesFunc::setDay(string d){dDay = d;};       //sets day of the week as a string Monday, Tuesday, etc.
void salesFunc::setMonth(int x){dMonth = x;};        //sets month as an integer January = 1, February = 2, etc.
void salesFunc::setDate(int y){dDate = y;};         //sets day as an integer 1, 2, 3, 4, etc.
void salesFunc::setYear(int z){dYear = z;};         //sets year as a year 2020, 2021, 2022 etc. actual version would use #include <chrono>
string salesFunc::getDay(){return dDay;}
int salesFunc::getMonth(){return dMonth;}
int salesFunc::getDate(){return dDate;}
int salesFunc::getYear(){return dYear;}
void salesFunc::setData(shoppingCart((&Cart)[20]),string d,int m,int t,int y)
{
  Cart[0].setDay(d);
  Cart[0].setMonth(m);
  Cart[0].setDate(t);
  Cart[0].setYear(y);
}

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
   


