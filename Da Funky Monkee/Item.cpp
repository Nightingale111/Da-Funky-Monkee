#include "item.h"

int Item::discountMultiplier = 100;

/*-------------------------------------------------------------------------
Function name: Item
Parameters: string name, double oPrice, double discount
Return type: Item
Description: Sets up constructor and discount multiplier
--------------------------------------------------------------------------*/
Item::Item(string name, double oPrice, double discount)
    : itemName(name), originalPrice(static_cast<int>(oPrice)) {
    discountMultiplier = static_cast<int>(discount);
}

/*-------------------------------------------------------------------------
Function name: setDiscount
Parameters: int newDiscount
Return type: void
Description: Sets up new discount multiplier
--------------------------------------------------------------------------*/
void Item::setDiscount(int newDiscount) {
    discountMultiplier = newDiscount;
}

/*-------------------------------------------------------------------------
Function name: getName
Parameters: none
Return type: string
Description: Returns the name of selected item
--------------------------------------------------------------------------*/
string Item::getName() {
    return itemName;
}

/*-------------------------------------------------------------------------
Function name: getOPrice
Parameters: none
Return type: double
Description: Returns the original price of selected item
--------------------------------------------------------------------------*/
double Item::getOPrice() {
    return originalPrice;
}

/*-------------------------------------------------------------------------
Function name: getDiscPrice
Parameters: none
Return type: double
Description: Returns the discounted price of selected item
--------------------------------------------------------------------------*/
double Item::getDiscPrice() {
    return originalPrice * (1 - (discountMultiplier / 100.0));
}
