#include "drinkItem.h"
#include <iostream>
drinkItem::drinkItem(string n, float p, int q, string c, string sz) 
    : menuItem(n, p, q, c) {
    size = sz;
}

void drinkItem::setSize(string sz) { size = sz; }
string drinkItem::getSize() { return size; }

void drinkItem::displayItem()
 {
    menuItem::displayItem();
    cout << " | Size: " << size << endl;
}
