//
// Created by abdul on 5/7/2026.
//

#include "bill.h"

#include <iostream>
#include <ostream>

bill::bill(order o, float t, float d) {
    billOrder = o ;
    TaxLessAmount = billOrder.calculateTotal();

    tax = (t/100) * TaxLessAmount;
    discount = d/100 * TaxLessAmount;
    finalAmount = TaxLessAmount + tax - discount;
}

float bill::calculateBill() {

    finalAmount = TaxLessAmount + tax - discount;
    return finalAmount;
}

void bill::setTax(float t) {
    tax = (t/100) * TaxLessAmount;
}

void bill::setDiscount(float d) {
    discount = d/100 * TaxLessAmount;
}

float bill::getTaxLessAmount() {
    return TaxLessAmount;
}

void bill::displayBill() {


    cout << "Before Taxes: " << TaxLessAmount << endl;
    cout << "Tax: " << tax << "% (" << taxAmount << ")" << endl;
    cout << "Discount: " << discount << "% (" << discountAmount << ")" << endl;
    cout << "Final Amount: " << finalAmount << endl;
}