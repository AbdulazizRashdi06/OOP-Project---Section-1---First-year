//
// Created by abdul on 5/8/2026.
//

#include "pages.h"

#include <iostream>
#include <ostream>

#include "foodItem.h"
#include "menu.h"



void mainPage(menu &m,
              vector<foodItem> &foods,
              vector<drinkItem> &drinks,
              vector<order> &o,
              vector<table> &t,
              vector<waiter> &w,
              float &TP,
              float &DP) {
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
         menuPage(m, foods, drinks , o, t, w,TP,DP);
    }
    else if (choice == 2) {
        orderPage(m, foods, drinks , o, t, w,TP,DP);
    }
    else if (choice == 3) {
        tablePage(m, foods, drinks , o, t, w,TP,DP);
    }
    else if (choice == 4) {
        waiterPage(m, foods, drinks , o, t, w,TP,DP);
    }
    else if (choice == 5) {
        billSettings(m, foods, drinks , o, t, w,TP,DP);
    }
    else if (choice == 0) {
        cout<< " ===== END PAGE ===== " <<endl;
    }
}



void tablePage(menu &m,
              vector<foodItem> &foods,
              vector<drinkItem> &drinks,
              vector<order> &o,
              vector<table> &t,
              vector<waiter> &w,
              float &TP,
              float &DP) {
    cout<< " ===== table Page test" <<endl;
}
void waiterPage(menu &m,
              vector<foodItem> &foods,
              vector<drinkItem> &drinks,
              vector<order> &o,
              vector<table> &t,
              vector<waiter> &w,
              float &TP,
              float &DP) {
    cout<< " ===== waiter Page test" <<endl;
}


