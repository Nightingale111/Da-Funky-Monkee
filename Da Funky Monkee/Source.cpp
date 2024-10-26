#include "item.cpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*class Item {
public:
private:
	string itemName;
	int originalPrice;
	static int discountMultiplier;

};*/

void addItemsToList(vector<Item>& inventory);
void printInventory(vector<Item> inventory);

int main(){
	vector<Item> inventory;
	addItemsToList(inventory);

	Item::setDiscount(20);

	printInventory(inventory);

}

void addItemsToList(vector<Item>& inventory) {
	int itemNumber;
	cout << "How many items would you like to add to the inventory? ";
	cin >> itemNumber;
	for (int item = 0; item < itemNumber; item++) {
		string name;
		double price;
		cout << "\n\nItem #" << (item + 1) <<"\nWhat is the item name? ";
		cin >> name;
		cout << "\nWhat is the item price? ";
		cin >> price;

		Item newItem(name, price, 0);
		inventory.push_back(newItem);
	}
}
void printInventory(vector<Item> inventory) {
	cout << "\nInventory:\n\n";
	for (Item item : inventory) {
		cout << "Name: " << item.getName();
		cout << "\nOriginal Price: $" << item.getOPrice();
		cout << "\nDiscounted Price: $" << item.getDiscPrice();
	}
}
