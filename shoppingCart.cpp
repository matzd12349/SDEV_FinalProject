#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include "shoppingCart.h"

using namespace std;


shoppingCart::shoppingCart()
{
  int Id = 0; string Name = " ";
  string Type = " ";
  int Qty = 0;
  double Price = 00.00;
}

void shoppingCart::addItem(shoppingCart((&Cart)[20]), int Type, int&  Id,int c)
{
  
  int CChoice = Id;
  int choice = Type;
  switch(choice)
  {
case 1:
    cout << "Select your shirt: \n\n";
    cout << "1)White shirt\n2)Black polo\n3)Brown sweater\n\n";
     
    if (CChoice == 1){
    Type = 1;
    Id = 1;

      cout << "How Many would you like?";
        cin >> temp;
     
        Cart[c].setType("Shirts");
        Cart[c].setId(1);
        Cart[c].setName("White Button");
        Cart[c].setPrice(25.00);
        Cart[c].setQty(temp);
        Cart[c].setShirts(temp);
    }
    else if (CChoice == 2){
    Type = 1;
    Id = 2;

      cout << "How Many would you like?";
        cin >> temp;
     
        Cart[c].setType("Shirts");
        Cart[c].setId(2);
        Cart[c].setName("Black Polo");
        Cart[c].setPrice(25.00);
        Cart[c].setQty(temp);
        Cart[c].setShirts(temp);
    }
    else if (CChoice == 3){
    Type = 1;
    Id = 3;

      cout << "How Many would you like?";
        cin >> temp;
     
        Cart[c].setType("Shirts");
        Cart[c].setId(3);
        Cart[c].setName("Brown Sweater");
        Cart[c].setPrice(25.00);
        Cart[c].setQty(temp);
        Cart[c].setShirts(temp);
    }
    else {
      cout << "Enter a valid option between 1-3";
    }
    break;

case 2:
    cout << "Select your pants: \n\n";
    cout << "1)Kakhi\n2)Jeans\n3)Shorts\n\n";
   
    if (CChoice == 1){
    Type = 2;
    Id = 1;

      cout << "How Many would you like?";
        cin >> temp;
     
        Cart[c].setType("Pants");
        Cart[c].setId(1);
        Cart[c].setName("Khakis");
        Cart[c].setPrice(20.00);
        Cart[c].setQty(temp);
        Cart[c].setPants(temp);
    }
    else if (CChoice == 2){
    Type = 2;
    Id = 2;

      cout << "How Many would you like?";
        cin >> temp;
     
        Cart[c].setType("Pants");
        Cart[c].setId(2);
        Cart[c].setName("Jeans");
        Cart[c].setPrice(25.00);
        Cart[c].setQty(temp);
        Cart[c].setPants(temp);
    }
    else if (CChoice == 3){
    Type = 2;
    Id = 3;

      cout << "How Many would you like?";
        cin >> temp;
     
        Cart[c].setType("Pants");
        Cart[c].setId(3);
        Cart[c].setName("Shorts");
        Cart[c].setPrice(20.00);
        Cart[c].setQty(temp);
        Cart[c].setPants(temp);
    }
    else {
      cout << "Enter a valid option between 1-3";
    }
     break;


case 3:
    cout << "Select your shoes: \n\n";
    cout << "1)Basketball shoes\n2)Boots\n\n";
  ;
   
    if (CChoice == 1){
    Type = 3;
    Id = 1;

      cout << "How Many would you like?";
        cin >> temp;
     
        Cart[c].setType("Shoes");
        Cart[c].setId(1);
        Cart[c].setName("Basketball Shoes");
        Cart[c].setPrice(50.00);
        Cart[c].setQty(temp);
    }
    else if (CChoice == 2){
    Type = 3;
    Id = 2;

        Cart[c].setType("Shoes");
        Cart[c].setId(1);
        Cart[c].setName("Boots");
        Cart[c].setPrice(30.00);
        Cart[c].setQty(temp);
    }
    else if(CChoice == 3){
    Type = 3;
    Id = 3;

      cout << "How Many would you like?";
        cin >> temp;
     
        Cart[c].setType("Shoes");
        Cart[c].setId(3);
        Cart[c].setName("Sandals");
        Cart[c].setPrice(25.00);
        Cart[c].setQty(temp);
    }
    else {
      cout << "Enter a valid option between 1-3";
    }

 break;
  

case 4:
    cout << "Select your hats: \n";
    cout << "1)Ball cap\n2)Fedora\n3)Top hat\n\n";
   
    if (CChoice == 1){
    Type = 4;
    Id = 1;

      cout << "How Many would you like?";
        cin >> temp;
     
        Cart[c].setType("Hats");
        Cart[c].setId(1);
        Cart[c].setName("Ball Cap");
        Cart[c].setPrice(25.00);
        Cart[c].setQty(temp);
    }
    else if (CChoice == 2){
    Type = 4;
    Id = 2;

      cout << "How Many would you like?";
        cin >> temp;
     
        Cart[c].setType("Hats");
        Cart[c].setId(2);
        Cart[c].setName("Fedora");
        Cart[c].setPrice(25.00);
        Cart[c].setQty(temp);
    }
    else if (CChoice == 3){
    Type = 4;
    Id = 3;

      cout << "How Many would you like?";
        cin >> temp;
     
        Cart[c].setType("Hats");
        Cart[c].setId(3);
        Cart[c].setName("Top Hat");
        Cart[c].setPrice(25.00);
        Cart[c].setQty(temp);
    }
    else {
      cout << "Enter a valid option between 1-3";
      }
 break;

case 5:
    cout << "Select your socks: \n";
    cout << "1)White socks\n2)Black socks\n3)Argyle socks\n4)Wool socks\n\n";
      
    if (CChoice == 1){
    Type = 5;
    Id = 1;

      cout << "How Many would you like?";
        cin >> temp;
     
        Cart[c].setType("Socks");
        Cart[c].setId(1);
        Cart[c].setName("White Socks");
        Cart[c].setPrice(10.00);
        Cart[c].setQty(temp);
    }
    else if (CChoice == 2){
    Type = 5;
    Id = 2;

      cout << "How Many would you like?";
        cin >> temp;
     
        Cart[c].setType("Socks");
        Cart[c].setId(2);
        Cart[c].setName("Black Socks");
        Cart[c].setPrice(10.00);
        Cart[c].setQty(temp);
    }
    else if (CChoice == 3){
    Type = 5;
    Id = 3;
    
      cout << "How Many would you like?";
        cin >> temp;
     
        Cart[c].setType("Socks");
        Cart[c].setId(3);
        Cart[c].setName("Argyle Socks");
        Cart[c].setPrice(10.00);
        Cart[c].setQty(temp);
    }
    else {
      cout << "Enter a valid option between 1-3";
    }
  break;  


    case 6:
    cout << "Select your accessories: \n";
    cout << "1)Watch\n2)Necklace\n3)Aviator sunglasses\n4)wallet\n\n";
      CChoice = Id;
    if (CChoice == 1){
    Type = 6;
    Id = 1;
    
      cout << "How Many would you like?";
        cin >> temp;
     
        Cart[c].setType("Accessories");
        Cart[c].setId(1);
        Cart[c].setName("Watch");
        Cart[c].setPrice(50.00);
        Cart[c].setQty(temp);
      }
    else if (CChoice == 2){
    Type = 6;
    Id = 2;
    

      cout << "How Many would you like?";
        cin >> temp;
     
        Cart[c].setType("Accessories");
        Cart[c].setId(2);
        Cart[c].setName("Necklace");
        Cart[c].setPrice(30.00);
        Cart[c].setQty(temp);
      }
    else if (CChoice == 3){
    Type = 6;
    Id = 3;
      cout << "How Many would you like?";
        cin >> temp;
     
        Cart[c].setType("Accessories");
        Cart[c].setId(3);
        Cart[c].setName("Wallet");
        Cart[c].setPrice(25.00);
        Cart[c].setQty(temp);
      }
  else {
      cout << "Enter a valid option between 1-3";
    }
  break;
  
  
}
}
void shoppingCart::emptyCart(shoppingCart((&cart)[20]))
{
  for(int i = 0; i < cart[0].cartTotal; i++)
    {
      cart[i].removeItem(cart, i);
      cart[0].cartTotal -= 1;
    }
 }

void shoppingCart::checkCart(shoppingCart((&cart)[20]))
{
  for(int t= 0; t < getCTotal(); t++)
    {
      cout << left << t << ") " << setw(12) << "Type: "<< cart[t].Type << " " <<
    setw(12)<< cart[t].Id << " style:" << setw(12) <<
    cart[t].Name << " Qty:" << setw(4) << cart[t].Qty <<  right
    <<" Price: $"  << cart[t].Price;
    }
}

void shoppingCart::setItem(shoppingCart((&cart)[20]), int& x)
{
  cart[x].Type = " ";
  cart[x].Id = 0;
  cart[x].Name = "";
  cart[x].Qty = 0;
  cart[x].Price = 00.00;
}

void shoppingCart::removeItem(shoppingCart((&cart)[20]),int& y)
{
  int temp;
  int cTotal = cart[0].cartTotal;
    cout << "How many would you like to remove?";
    cin >> temp;
    cart[y].setQty(cart[y].getQty() - temp) ;
    if(cart[y].getQty() == 0)
    {
      cart[0].setItem(cart, y);
      
    for(int b = y; b < cartTotal; b++)
    {
      cart[b] = cart[b + 1];
    }
      
    cart[0].setCTotal(-1);
    }
}

shoppingCart::shoppingCart(string t1,int i1,string t2,int i2,int l,int R )
{
Name = "Item1";
Type = t1;
Id = i1;
Qty = R;
Name = "Item2";
Type = t2;
Id=i2;
discItems = l;
    
}
shoppingCart::shoppingCart(shoppingCart((&Cart)[20]), string name, string type, int id,int qty, double price )
{setName(name);
setType(type);
setId(id);
setPrice(price);
setQty(qty); 
}                                                                                                                                                                
void shoppingCart::setName(string name){string Name = name;}
void shoppingCart::setType(string type){string Type = type;}
void shoppingCart::setId(int id){int Id = id;}
void shoppingCart::setPrice(double price){double Price = price;}
void shoppingCart::setQty(int qty){double Qty = qty;}

string  shoppingCart::getName(){return Name;}
string shoppingCart::getType(){return Type;}
int shoppingCart::getId(){return Id;}
double shoppingCart::getPrice(){return Price;}
int shoppingCart::getQty(){return Qty;}

double shoppingCart::coupon(shoppingCart((&Cart)[20]), shoppingCart((&cart)[20]),string t1,int i1,string t2,int i2,int l,int R )
{
  
  cout << "First clothing item Type as 'Shirt', 'Shoes', 'Accessories': ";
    cin >> t1;
      cout << endl;
  cout << "First Item ID such as 1, 2,3:";
     cin >> i1;
      cout << endl;
  cout << "Second clothing item Type as 'Shirt', ''Shoes'', 'Accressories': ";
    cin >> t2;
      cout << endl;
  cout << "Second Item ID such as 1, 2,3:";
     cin >> i2;
  cout << "Enter limits of use: ";
    cin >> l;
      cout << endl;
  cout << "Enter required amount of item 1 per use: ";
    cin >> R;
      cout << endl;
  


{
    
int temp;
  if (Cart[0].getTotalSales() >= 100)
    {Cart[0].setShippingCost(0);}
      else
        { Cart[0].setShippingCost(Cart[0].getTotalSales() * .08);}
    
    cout << "Shipping Cost: " << Cart[0].getShippingCost() << endl;
      if (Cart[0].getFotm() == 0 && Cart[0].getDay() != "Friday")

      {for(int i= 0; i < cartTotal; i++)
        if(cart[0].getType() == Cart[i].getType() && cart[0].getQty() == Cart[i].getQty() )
          {for(int x =0; x < cartTotal; x++) 
            
            if(cart[1].getType() == Cart[x].getType())
              {
              shoppingCart cart(cart[0].getType(), cart[0].getId(), x);
                Cart[cartTotal].setPrice(Cart[x].getPrice() * saleP);
                if(cart[0].getQty() > Cart[x].getQty());
               * Cart[cartTotal].setQty(Cart[x].getQty() - cart[0].getQty());
              } 
          } 
            
        for (int i = 0; i < discItems; i++)
        {
          temp = totalSales;
          totalSales -= Cart[i].getPrice() * saleP;
        }
      }    
        else
         { totalSales *= saleP;}
          cout << fixed << showpoint;
    cout << "Your Total comes to: ";
          return totalSales;
    cout<< endl << "Total Savings: ";
          return temp - totalSales;
        
        
  }
	}
void shoppingCart::setShippingCost(double tS){ shippingCost = (tS * .08);}
void shoppingCart::setAddTS(double price){totalSales = totalSales + price;}
void shoppingCart::setSubTS(double price){totalSales = totalSales - price;}
void shoppingCart::setCTotal(int c){ cartTotal = cartTotal + c;}


double shoppingCart::getShippingCost(){return shippingCost;}
double shoppingCart::getTotalSales(){return totalSales;}
int shoppingCart::getCTotal(){return cartTotal;}
string shoppingCart::getDay(){return dDay;}
int shoppingCart::getMonth(){return dMonth;}
int shoppingCart::getDate(){return dDate;}
int shoppingCart::getYear(){return dYear;}

void shoppingCart::setDay(string d){dDay = d;}
void shoppingCart::setMonth(int m){dMonth = m;}
void shoppingCart::setDate(int t){dDate = t;}
void shoppingCart::setYear(int y){dDay = y;}

void shoppingCart::setData(shoppingCart((&Cart)[20]),string& d,int& m,int& t,int& y)
{
  Cart[0].setDay(d);
  Cart[0].setMonth(m);
  Cart[0].setDate(t);
  Cart[0].setYear(y);
	
}
void shoppingCart::setShirts(int s){int shirts = shirts + s;}
void shoppingCart::setPants(int p){int pants = pants + p;}
void shoppingCart::setTotalSets(int s){int totalSets = totalSets + s;}
void shoppingCart::setDiscItems(int d){int discItems = discItems + d;}

int shoppingCart::getShirts(){return shirts;}
int shoppingCart::getPants(){return pants;}
int shoppingCart::getTotalSets(){return totalSets;}
int shoppingCart::getDiscItems(){return discItems;}
bool shoppingCart::getFotm(){return fotm;}
bool shoppingCart::getCouponU(){return couponU;}
