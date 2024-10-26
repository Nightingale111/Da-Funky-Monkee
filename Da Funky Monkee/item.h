#include <iostream>
#include <string>
using namespace std;


class Item {
public:
    //Constructor and functions described in Item.cpp
    static void setDiscount(int discount);
    string getName();
    double getOPrice();
    double getDiscPrice();
    Item(string name, double oPrice, double discount);
private:
    string itemName; //name of item
    int originalPrice; //the price of item before applying any discount
    static int discountMultiplier; //whatever the set multipler of the discount is

};