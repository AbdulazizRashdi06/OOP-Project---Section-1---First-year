//
// Created by abdul on 4/28/2026.
//

#include "table.h"



table::table(int n, int c) {
    tableNumber = n;
    capacity = c;
    isOccupied = false;
    currentOrder = nullptr;
}



int table::getCapacity() {

    return capacity;
}

order* table::getCurrentOrder() {

    return currentOrder;
}

int table::getTableNumber() {

    return tableNumber;
}

void table::assignOrder(order *o) {

    currentOrder = o;
}

void table::setCapacity(int c) {
    capacity = c;
}

bool table::isEmpty() {

    return not  isOccupied;
}

void table::setOccupied(bool c) {

    isOccupied = c;
}


