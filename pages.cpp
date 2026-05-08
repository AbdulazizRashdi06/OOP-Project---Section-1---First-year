//
// Created by abdul on 5/8/2026.
//

#include "pages.h"

#include <iostream>
#include <ostream>



void mainPage(menu &m, order &o, table &t, waiter &w) {
    cout<< " ===== MAIN PAGE ===== " <<endl;
    cout<< " 1.  Menu Page " <<endl;
    cout<< " 2.  Order Page " <<endl;
    cout<< " 3.  Table Page " <<endl;
    cout<< " 4.  Waiter Page " <<endl;
    cout<< " 5.  Bill Page " <<endl;
    cout<< " 0.  Exit " <<endl;
    int choice;
    cout<< " Enter Number : ";
    cin>>choice;

    if (choice == 1) {
         menuPage();
    }
    else if (choice == 2) {
        orderPage();
    }
    else if (choice == 3) {
        tablePage();
    }
    else if (choice == 4) {
        waiterPage();
    }
    else if (choice == 5) {
        waiterPage();
    }
    else if (choice == 0) {
        cout<< " ===== END PAGE ===== " <<endl;
    }
}

void menuPage() {
cout<< " ===== menu Page test" <<endl;

}

void orderPage() {
    cout<< " ===== order Page test" <<endl;

}

void tablePage() {
    cout<< " ===== table Page test" <<endl;
}
void waiterPage() {
    cout<< " ===== waiter Page test" <<endl;
}