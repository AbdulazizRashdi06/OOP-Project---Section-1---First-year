#ifndef OOP_PROJECT_YEAR1_BILL_H
#define OOP_PROJECT_YEAR1_BILL_H
#include "order.h"

class bill {
private:
    order billOrder;
    float TaxLessAmount;
    float taxPercent;
    float discountPercent;
    float taxAmount;
    float discountAmount;
    float finalAmount;

public:
    bill(order o, float t, float d);
    
    float calculateBill();
    
    void setTax(float t);
    void setDiscount(float d);
    
    float getTaxLessAmount();
    float getFinalAmount();
    
    void displayBill();
};

#endif
