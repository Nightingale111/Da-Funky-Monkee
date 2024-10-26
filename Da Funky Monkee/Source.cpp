#include "item.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void addItemsToList(vector<Item>& inventory);
void printInventory(vector<Item> inventory);

int main() {
    vector<Item> inventory;
    addItemsToList(inventory);

    Item::setDiscount(20);

    printInventory(inventory);

}

/*-------------------------------------------------------------------------
Function name: addItemToList
Parameters: vector<Item>& inventory
Return type: void
Description: Asks how many items the user wants to add and then allows the 
user to set the name and original price of how many itmes they wanted to add
--------------------------------------------------------------------------*/
void addItemsToList(vector<Item>& inventory) {
    int itemNumber;
    cout << "How many items would you like to add to the inventory? ";
    cin >> itemNumber;
    for (int item = 0; item < itemNumber; item++) {
        string name;
        double price;
        cout << "\n\nItem #" << (item + 1) << "\nWhat is the item name? ";
        cin >> name;
        cout << "\nWhat is the item price? ";
        cin >> price;

        Item newItem(name, price, 0);
        inventory.push_back(newItem);
    }
}

/*-------------------------------------------------------------------------
Function name: printInventory
Parameters: vector<Item> inventory
Return type: void
Description: Prints the name, original price, and discounted price of each 
item in ascending order
--------------------------------------------------------------------------*/
void printInventory(vector<Item> inventory) {
    cout << "\nInventory:\n";
    for (Item item : inventory) {
        cout << "\nName: " << item.getName();
        cout << "\nOriginal Price: $" << item.getOPrice();
        cout << "\nDiscounted Price: $" << item.getDiscPrice();
    }
}
