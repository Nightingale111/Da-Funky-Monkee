#include "item.h"

int Item::discountMultiplier = 100;

//Sets up constructor and discount multiplier
Item::Item(string name, double oPrice, double discount)
    : itemName(name), originalPrice(static_cast<int>(oPrice)) {
    discountMultiplier = static_cast<int>(discount);
}

//Sets up new discount multiplier 
void Item::setDiscount(int newDiscount) {
    discountMultiplier = newDiscount;
}

//Returns the name of selected item
string Item::getName() {
    return itemName;
}

// Returns the orignal price of selected item
double Item::getOPrice() {
    return originalPrice;
}

//Returns the discounted price of selected item
double Item::getDiscPrice() {
    return originalPrice * (1 - (discountMultiplier / 100.0));
}