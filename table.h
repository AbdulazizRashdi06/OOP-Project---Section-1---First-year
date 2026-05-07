//
// Created by abdul on 4/28/2026.
//

#ifndef OOP_PROJECT_YEAR1_TABLE_H
#define OOP_PROJECT_YEAR1_TABLE_H

#include "order.h"


class table {
    int tableNumber;
    int capacity;
    bool isOccupied;
    order* currentOrder;
    public:

    table(int c);
    int getTableNumber();
    int getCapacity();
    bool isEmpty();
    order* getCurrentOrder();
    void setCapacity(int );
    void setOccupied(bool );
    void assignOrder(order* o);




};


#endif //OOP_PROJECT_YEAR1_TABLE_H
