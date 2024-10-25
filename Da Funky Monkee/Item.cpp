#include "item.h"
void Item::setDiscount(int newDiscount) {
	discountMultiplier = newDiscount;
}
string Item::getName() {
	return itemName;
}
double Item::getOPrice() {
	return originalPrice;
}
double Item::getDiscPrice() {
	return originalPrice * (1 - (discountMultiplier / 100));
}

