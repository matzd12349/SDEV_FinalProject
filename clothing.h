#ifndef CLOTHING_H
#define CLOTHING_H
//include string header
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <algorithm>

using namespace std;

//creation of class clothing
class clothing
{

private:

    int clothId;	//type
    string type;			//color
    string name;
    double price;
    int quantity;
//clothing ID refers to type (shirt, shoes, etc.)
//clothing type refers to color

    
    
public: 
    clothing();
    clothing(string& t, int& id, string& n, double& p);
    int getclothId();
    string getType();
    string getName();
    double getPrice();
    int getQuantity();
    void setName(string Name);
    void setType(string Type);
    void setId(int id);
    void setPrice(double Price);
    void setQty(int qty);

};
#endif