//
// Created by abdul on 5/7/2026.
//

#include "waiter.h"

int waiter::count = 1;

waiter::waiter(string n) {
    name = n;
    assignedTable = nullptr;
    waiterID = count++;
}

void waiter::assignTable(table* t) {

    assignedTable = t ;
}

string waiter::getName() {
    return name;
}

table* waiter::getTable() {

    return assignedTable;
}

int waiter::getWaiterID() {

    return waiterID;
}

void waiter::resetCounter() {
    count = 1;
}

void waiter::displayWaiter() {
    cout << "Waiter ID: " << waiterID << endl;
    cout << "Waiter Name: " << name << endl;

    if (assignedTable != nullptr) {
        cout << "Assigned Table: " << assignedTable->getTableNumber() << endl;
    } else {
        cout << "No table assigned" << endl;
    }
}
