//
// Created by abdul on 5/7/2026.
//

#ifndef OOP_PROJECT_YEAR1_BILL_H
#define OOP_PROJECT_YEAR1_BILL_H
#include "order.h"

class bill {
private:
    order billOrder;
    float TaxLessAmount;
    float tax;
    float discount;
    float finalAmount;

public:
    bill(order o, float t, float d);


    float calculateBill();
    void setTax(float t);
    void setDiscount(float d);


    float getTaxLessAmount();
    void displayBill();
};


#endif //OOP_PROJECT_YEAR1_BILL_H