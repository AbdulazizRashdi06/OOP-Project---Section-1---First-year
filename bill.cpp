#include "bill.h"
#include <iostream>
#include <iomanip>
using namespace std;

bill::bill(order o, float t, float d) {
    billOrder = o;
    TaxLessAmount = billOrder.calculateTotal();
    
    taxPercent = t;
    discountPercent = d;
    
    taxAmount = (t / 100.0f) * TaxLessAmount;
    discountAmount = (d / 100.0f) * TaxLessAmount;
    finalAmount = TaxLessAmount + taxAmount - discountAmount;
}

float bill::calculateBill() {
    TaxLessAmount = billOrder.calculateTotal();
    taxAmount = (taxPercent / 100.0f) * TaxLessAmount;
    discountAmount = (discountPercent / 100.0f) * TaxLessAmount;
    finalAmount = TaxLessAmount + taxAmount - discountAmount;
    return finalAmount;
}

void bill::setTax(float t) {
    taxPercent = t;
    taxAmount = (t / 100.0f) * TaxLessAmount;
    finalAmount = TaxLessAmount + taxAmount - discountAmount;
}

void bill::setDiscount(float d) {
    discountPercent = d;
    discountAmount = (d / 100.0f) * TaxLessAmount;
    finalAmount = TaxLessAmount + taxAmount - discountAmount;
}

float bill::getTaxLessAmount() {
    return TaxLessAmount;
}

float bill::getFinalAmount() {
    return finalAmount;
}

void bill::displayBill() {
    cout << fixed << setprecision(2);
    cout << "\n=== BILL ===" << endl;
    cout << "Subtotal: $" << TaxLessAmount << endl;
    cout << "Tax (" << taxPercent << "%): $" << taxAmount << endl;
    cout << "Discount (" << discountPercent << "%): -$" << discountAmount << endl;
    cout << "------------------------" << endl;
    cout << "FINAL AMOUNT: $" << finalAmount << endl;
    cout << "===========\n" << endl;
}
