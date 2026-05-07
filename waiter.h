//
// Created by abdul on 5/7/2026.
//
#include <iostream>
#include "table.h"
using namespace std;
#ifndef OOP_PROJECT_YEAR1_WAITER_H
#define OOP_PROJECT_YEAR1_WAITER_H
class waiter {
private:
    order billOrder;
    int waiterID;
    string name;
    table* assignedTable;
    static int count;

public:
    waiter(string n);

    static void resetCounter();

    int getWaiterID();
    string getName();

    void assignTable(table* t);
    table* getTable();

    void displayWaiter();
};


#endif //OOP_PROJECT_YEAR1_WAITER_H
