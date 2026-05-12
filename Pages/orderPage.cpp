//
// Created by abdul on 5/8/2026.
//

#include "pages.h"
#include "bill.h"


void orderPage(menu &m,
              vector<foodItem> &foods,
              vector<drinkItem> &drinks,
              vector<order> &o,
              vector<table> &t,
              vector<waiter> &w,
              float &TP,
              float &DP) {
    int choice;
    cout << " ===== ORDER PAGE ===== " << endl;
    cout << "1. Start new order" << endl;
    cout << "2. View all orders" << endl;
    cout << "3. View order by number" << endl;
    cout << "4. Add item to order" << endl;
    cout << "5. Remove item from order" << endl;
    cout << "6. Submit order / show bill" << endl;
    cout << "7. Mark order as served" << endl;
    cout << "0. Back" << endl;
    cin >> choice;
    if (choice == 1) {
        bool stillOrdering = true;
        o.push_back(order());
        while (stillOrdering) {
            m.displayMenu();
            cout << "Pick Item : ";
            cin >> choice;

            menuItem* item = m.getItem(choice);
            if (item->getQuantity() > 0) {
                o.back().addItem(item);
                item->setQuantity(item->getQuantity() - 1);
                cout << "item added" << endl;
            } else {
                cout << "Item out of stock" << endl;
            }
            o.back().displayOrder();
            cout << "1 -Anything more ?" << endl <<
                    "0 -Finish order " << endl;
            cin >> choice;
            if (choice == 0) {
                o.back().setStatus("Submitted");
                stillOrdering = false;
                orderPage(m, foods, drinks , o, t, w,TP,DP);
            }
            else if (choice == 1) {
                continue;
            }

        }

    }

    else if (choice == 2) {
        if (o.empty()) {
            cout << "0 Available Orders" << endl;
            orderPage(m, foods, drinks , o, t, w,TP,DP);
        }
        else{
            for (int i = 0; i < o.size(); i++) {
                o[i].displayOrder();

            }
            orderPage(m, foods, drinks , o, t, w,TP,DP);

        }
    }

    else if (choice == 3) {
        if (o.empty()) {
            cout << "0 Available Orders to view" << endl;

            orderPage(m, foods, drinks , o, t, w,TP,DP);
        }
        else {

            int  id;
            cout << "Enter Order NUM : " ;
            cin >> id;
            for (int i = 0; i < o.size(); i++) {
                if (o[i].getOrderID() == id) {
                    o[i].displayOrder();
                }
            }
            orderPage(m, foods, drinks , o, t, w,TP,DP);
        }
    }
    else if (choice == 4) {
        if (o.empty()) {
            cout << "0 Available Orders to view" << endl;
        }
        else {
            int choice, num;
            cout << "Enter Order NUM : " ;
            cin >> num;

            m.displayMenu();
            cout << "Pick Item : ";
            cin >> choice;

            menuItem* item = m.getItem(choice);
            if (item->getQuantity() > 0) {
                for (int i = 0; i < o.size(); i++) {
                    if (o[i].getOrderID() == num) {
                        o[i].addItem(item);
                    }
                }
                item->setQuantity(item->getQuantity() - 1);
                cout << "item added" << endl;
                orderPage(m, foods, drinks , o, t, w,TP,DP);
            } else {
                cout << "Item out of stock" << endl;
                orderPage(m, foods, drinks , o, t, w,TP,DP);
            }
        }
    }
    else if (choice == 5) {
        int oc;
        int id;

        cout << "Enter Order NUM : ";
        cin >> oc;

        for (int i = 0; i < o.size(); i++) {
            if (o[i].getOrderID() == oc) {
                o[i].displayOrder();

            }
        }

            cout << "Enter Item ID to remove: ";
            cin >> id;
        for (int i = 0; i < o.size(); i++) {
            if (o[i].getOrderID() == oc) {
                o[i].removeItem(id);

            }
        }


            cout << "Item removed " << endl;
            orderPage(m, foods, drinks, o, t, w, TP, DP);

    }
            else if (choice == 6) {

            int oc;

            cout << "Enter Order NUM : ";
            cin >> oc;

                for (int i = 0; i < o.size(); i++) {
                    if (o[i].getOrderID() == oc) {
                        bill b(o[i], TP, DP);
                        b.displayBill();
                        o[i].setStatus("Submitted");
                    }
                }

            choice = 0;
            while (choice != 1) {

                cout << "Order submitted ! - 1 to continue " << endl;
                cin >> choice;
            }
            orderPage(m, foods, drinks, o, t, w, TP, DP);
        }

        else if (choice == 7) {
            int oc;

            cout << "Enter Order NUM : ";
            cin >> oc;


            for (int i = 0; i < o.size(); i++) {
                if (o[i].getOrderID() == oc) {
                    o[i].setStatus("Served");
                }
            }
            ;
            choice = 0;
            while (choice != 1) {

                cout << "Order served ! - 1 to continue " << endl;
                cin >> choice;
            }
            orderPage(m, foods, drinks, o, t, w, TP, DP);
        }
        else if (choice == 0) {
            mainPage(m, foods, drinks, o, t, w, TP, DP);
        }
    }


