//
// Created by abdul on 4/20/2026.
//

#include "menu.h"

#include <iostream>
#include <ostream>
using namespace std;

menu::menu() {

}

menu::~menu() {

}


void menu::addItem(menuItem* s) {
    items.push_back(s);
}

void menu::removeAllItems() {
    items.clear();
    }


menuItem* menu::getItem(int i) {
    return items[i];

}

void menu::removeItem(int i) {
    items.erase(items.begin() + i);
}

void menu::displayMenu() {
    for (int i = 0; i < items.size(); i++) {
        cout << items[i]->getName() << endl;
    }
}

