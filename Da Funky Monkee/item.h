#include <iostream>
#include <string>
using namespace std;


class Item {
public:
	void setDiscount(int discount);
	string getName();
	double getOPrice();
	double getDiscPrice();
	Item(string name, double oPrice, double discount);
private:
	string itemName;
	int originalPrice;
	static int discountMultiplier;

};