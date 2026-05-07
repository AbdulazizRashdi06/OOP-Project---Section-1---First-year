//
// Created by abdul on 5/7/2026.
//

#include "waiter.h"


waiter::waiter(string n) {
    name = n;

    waiterID = count++;
}

void waiter::assignTable(table t) {

    assignedTable = t ;
}

string waiter::getName() {
    return name;
}

table waiter::getTable() {

    return assignedTable;
}

int waiter::getWaiterID() {

    return waiterID;
}

void waiter::resetCounter() {
    count = 1;
}

void waiter::displayWaiter() {
    cout  << " Waiter Name " << name << endl;
}

