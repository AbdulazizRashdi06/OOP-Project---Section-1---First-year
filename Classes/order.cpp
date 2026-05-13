//
// Created by User on 4/29/2026.
//

#include "order.h"

#include <algorithm>
#include <filesystem>
#include <iostream>
#include "menuItem.h"
using namespace std;


int order::count=0;
order::order() {
    orderID = count + 1;
    count += 1;
    status="Pending";
}
void order::resetCounter() {
    count=0;
}
void order::addItem(menuItem* item) {
    orderedItems.push_back(item);
};

void order::removeItem(int itemID) {};

void order::setStatus(string s) {
    status = s;};
string order::getStatus() {return status;};

float order::calculateTotal() {
    float total = 0;
    for (int i = 0; i < orderedItems.size(); i++) {
        total += orderedItems[i]->getPrice();
    }
    return total;
}
int order::getOrderID() {
    return orderID;
}
void order::displayOrder() {
    cout << "Order ID: " << orderID << endl;
    cout << "Status: " << status << endl;
    cout << "Items: " << endl;
    for (int i = 0; i < orderedItems.size(); i++) {
        orderedItems[i]->displayItem();
    }
    cout << "Total: " << calculateTotal() << endl;
}



