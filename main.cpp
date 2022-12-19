/*
Main program
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include "shoppingCart.h"
#include "account.h"

using namespace std;

//"BREEZY10" = 1
//"COOL5" = 2
//"SAVE8" = 3

int main()
{
	//first number is menu choice, second is sub-menu choice
	//acts as counter for shopping cart
	
	int disc[2] = {0,0};//temp
	string TYPE; //record type of item selection
  int ID;   //records item id
  int x;   // holds cart number item
  int temp;
  int i, i1, i2, l, R;
  int quantity;
  
	
    //Main navigation menu, a number between 1 and 10 must be enterred
    int choice;
    int CChoice;
    bool exitProgram = true;

  shoppingCart sCart[20];

cout << "Welcome to Ivy Threads! Enter your selection here!\n\n";
menu:  //Returns user back to menu
cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout << "1) Shirts\n";
cout << "2) Pants\n";
cout << "3) Shoes\n";
cout << "4) Hats\n";
cout << "5) Socks\n";
cout << "6) Accessories\n";
cout << "7) Deals!\n";
cout << "8) Press for assistance\n";
cout << "9) Checkout\n";
cout << "10) Check Cart\n";
cout << "11) Remove Item\n";
cout << "12) Exit shopping app\n\n";
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
cin >> choice;
switch(choice)
  {
case 1:
    {cout << "Select your shirt: \n\n";
    cout << "1)White shirt\n2)Black polo\n3)Brown sweater\n\n";
    cin >> CChoice;
    if (CChoice == 1){
    TYPE = "Shirt";
    ID = 1;
      cout << "How Many would you like?";
        cin >> temp;
        ;
    }
    else if (CChoice == 2){
      TYPE = "Shirt";
    ID = 2;
      cout << "How Many would you like?";
        cin >> temp;
    }
    else if (CChoice == 3){
    TYPE = "Shirt";
    ID = 3;
      cout << "How Many would you like?";
        cin >> temp;
    }
    else {
      cout << "Enter a valid option between 1-3";
    }
    break;}

case 2:
    {cout << "Select your pants: \n\n";
    cout << "1)Kakhi\n2)Jeans\n3)Shorts\n\n";
    cin >> CChoice;
    if (CChoice == 1){
    TYPE = "Pants";
    ID = 1;
      cout << "How Many would you like?";
        cin >> temp;
    }
    else if (CChoice == 2){
    TYPE = "Pants";
    ID = 2;
      cout << "How Many would you like?";
        cin >> temp;
    }
    else if (CChoice == 3){
    TYPE = "Pants";
    ID = 3;
      cout << "How Many would you like?";
        cin >> temp;
    }
    else {
      cout << "Enter a valid option between 1-3";
    }
    break;}


case 3:
  {    cout << "Select your shoes: \n\n";
    cout << "1)Basketball shoes\n2)Boots\n\n";
    cin >> CChoice;
    if (CChoice == 1){
    TYPE = "Shoes";
    ID = 1;
      cout << "How Many would you like?";
        cin >> temp;
    }
    else if (CChoice == 2){
    TYPE = "Shoes";
    ID = 2;
      cout << "How Many would you like?";
        cin >> temp;
    }
    else if(CChoice == 3){
    TYPE = "Shoes";
    ID = 3; 
      cout << "How Many would you like?";
        cin >> temp;
    }
    else {
      cout << "Enter a valid option between 1-3";
    }
    break;}

  

case 4:
  {  cout << "Select your hats: \n";
    cout << "1)Ball cap\n2)Fedora\n3)Top hat\n\n";
    cin >> CChoice;
    if (CChoice == 1){
    TYPE = "Hats";
    ID = 1;
      cout << "How Many would you like?";
        cin >> temp;
    }
    else if (CChoice == 2){
    TYPE = "Hats";
    ID = 2;
      cout << "How Many would you like?";
        cin >> temp;
    }
    else if (CChoice == 3){
    TYPE = "Hats";
    ID = 3;
      cout << "How Many would you like?";
        cin >> temp;
    }
    else {
      cout << "Enter a valid option between 1-3";
      }
      break;}

case 5:
  {cout << "Select your socks: \n";
    cout << "1)White socks\n2)Black socks\n3)Argyle socks\n4)Wool socks\n\n";
      cin >> CChoice;
    if (CChoice == 1){
    TYPE = "Socks";
    ID = 1;
      cout << "How Many would you like?";
        cin >> temp;
    }
    else if (CChoice == 2){
    TYPE = "Socks";
    ID = 2;
      cout << "How Many would you like?";
        cin >> temp;
    }
    else if (CChoice == 3){
    TYPE = "Socks";
    ID = 3;
      cout << "How Many would you like?";
        cin >> temp;
    }
    else {
      cout << "Enter a valid option between 1-3";
    }
  break;  
}

case 6:
  {    cout << "Select your accessories: \n";
    cout << "1)Watch\n2)Necklace\n3)Aviator sunglasses\n4)wallet\n\n";
      cin >> CChoice;
    if (CChoice == 1){
    TYPE = "Accessories";
    ID = 1;
      cout << "How Many would you like?";
        cin >> temp;
    }
    else if (CChoice == 2){
    TYPE = "Accessories";
    ID = 2;
      cout << "How Many would you like?";
        cin >> temp;
    }
    else if (CChoice == 3){
    TYPE = "Accessories";
    ID = 3;
      cout << "How Many would you like?";
        cin >> temp;
    }
    
    else {
      cout << "Enter a valid option between 1-3";
    }
  break;}

case 7:
    {cout << "Today's Bundles\n\n";
    cout << "White shirt with blue jeans: 25% off!\n";
    cout << "Orange shirt, aviator sunglasses, and boots: 35% off!\n\n";
    break;}
    
case 8:
{
cout << "Here is how to use our system: \n\n";
cout << "Enter a number between 1 and 6 to enter the clothes selection menu.\n";
    cout << "Once you have selected your article of clothing (hat,shirt, etc.), you will be prompted to make another selection.\n";
    cout << "Press 7 to find out about our deals of the day. \n Once you know about these deals, you can go into the menu, and select these combinations for a discount!\n";
    cout << "Press 9 to check ypur cart.";
    cout << "Press 10 to remove an item from cart.";
    cout << "Press 11 to checkout.";
    cout << "Press 12 to exit the program.";
    break;
  }
case 9:
  {sCart[0].checkCart(sCart);
  break;}
    
case 10:
  {sCart[0].checkCart(sCart);
  cout << "what item would you like to remove?";
    cin >> x;
  sCart[0].removeItem(sCart,x);
  break;}

case 11:
  {  int dM, dT,dY;
  string dD;
  cout << "Please enter the day of the week..Monday, Tuesday ...etc: ";
    cin >> dD;
      cout << endl;
   cout << "Please enter the month of the year..1,2,3,4,5 ...etc: ";
    cin >> dM;
      cout << endl;
   cout << "Please enter the date of the month..1,2,3,4,5...etc: ";
    cin >> dT;
      cout << endl;
   cout << "Please enter the year..2012, 2020, 2022 ...etc: ";
    cin >> dY;
      cout << endl;
  
  sCart[0].setData(sCart, dD, dM, dT, dY);
  sCart[0].calcDiscount(sCart);
  salesFunc couponUsage;
  shoppingCart cCart[2];
    if(sCart[0].getCouponU() == 1)
    { cout << "Enter a value of first item's ID: ";
          cin >> i1;
      cout << " Enter a value for the second items ID: ";
          cin >> i2;
      cout << "Enter a value for limits: ";
          cin >> l;
      cout << "Enter a valuefor requirement to recieve discount: ";
          cin >> R;
        cCart[0].coupon(sCart, "Items1",i1,"Items2",i2,l,R );
        sCart[0].discountedTotal(sCart, cCart);
          break;}
		}
    
case 12:
  {exit(0);
  break;}
    
default: 
  {cout <<"Enter a number between 1 and 10\n";
  goto menu;
  break;}
}
   
  sCart[0].addItem(sCart,choice, ID, sCart[0].cartTotal);
  
  sCart[0].setCTotal(1);
  goto menu;
		
}
  
