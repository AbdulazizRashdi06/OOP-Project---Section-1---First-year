//
// Created by abdul on 4/20/2026.
//
#include<string>
#include "menuItem.h"
#include <iostream>
using namespace std;

menuItem::menuItem(string n, float p, int q, string c) {
    name = n; price = p; quantity = q; category = c;
    itemID = count++;

}
int menuItem::count = 1;

void menuItem::resetCounter() {
    count = 1;

}
void menuItem::setPrice(float p) {
    price = p;
}

void menuItem::addQuantity(int q)
{quantity += q;}
void menuItem::setName(string n) {

    name = n;
}

void menuItem::addCategory(string s) {
    category = s;
}

void menuItem::setCategory(string s) {
    category = s;
}



string menuItem::getCategory( ) {

    return category;

}
string menuItem::getName() {
    return name;
}
float menuItem::getPrice() {
    return price;
}
int menuItem::getQuantity() {
    return quantity;
}
void menuItem::setQuantity(int q) {
    quantity = q;
}

int menuItem::getItemID() {

    return itemID;
}

void menuItem::displayItem() {
    cout << "ID: " << itemID
         << " | Name: " << name
         << " | Price: " << price
         << " | Quantity: " << quantity
         << " | Category: " << category;
}
