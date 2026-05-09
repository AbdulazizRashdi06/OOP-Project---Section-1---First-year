//
// Created by abdul on 5/9/2026.
//

#include "pages.h"





void menuPage(menu &m,
              vector<foodItem> &foods,
              vector<drinkItem> &drinks,
              vector<order> &o,
              vector<table> &t,
              vector<waiter> &w,
              float &TP,
              float &DP) {
    cout<< " ===== MENU PAGE =====" <<endl;
    cout<< " 1.  DisplayMenu " <<endl;
    cout<< " 2.  AddFoodItem " <<endl;
    cout<< " 3.  AddDrinkItem " <<endl;
    cout<< " 4.  RemoveMenuItem " <<endl;
    cout<< " 0.  Back " <<endl;
    cout<< " Pick NUM :  " ;
    int choice;
    cin>> choice;
    if (choice == 1) {
        m.displayMenu();
        choice = 0;
        while (choice != 1) {
            cout<< "1. Go back -  " ;
            cin>> choice;
        }
        menuPage(m, foods, drinks , o, t, w,TP,DP);
    }
    else if (choice == 2) {
        float price;
        int quantity, calories;

        string name , catagory;
        bool isSpicy;
        cout<< " Food Item NAME : " ;
        cin>> name ;
        cout<< " Price : " ;
        cin>> price ;
        cout<< " Quantity : " ;
        cin>> quantity ;
        cout<< " Catagory : " ;
        cin>> catagory ;
        cout<< " Is it Spicy - 1 for yes - 0 for NO : " ;
        cin>> choice ;
        if (choice == 1) {
            isSpicy = true;
        }
        else if (choice == 0) {
            isSpicy = false;
        }
        cout<< " calories : " ;
        cin>> calories ;
        cout<< " Item Name : " << name << endl
        << " Item Price : " << price << endl
        << " Item Quantity : " << quantity << endl
        << " Item Catagory : " << catagory << endl;
        if (isSpicy) {
            cout<< " Item Name is Spicy" <<endl;
        }
        else {cout<< " Item Name is Not Spicy" <<endl;}
        cout<<"Calories : "<<calories<<endl;

        foods.push_back(foodItem(name, price, quantity, catagory, isSpicy, calories));
        m.addItem(&foods.back());
        cout<<" Item Added Successfuly " <<endl;
        choice = 0;
        while (choice != 1) {
            cout<< "1. Go back -  " ;
            cin>> choice;
        }
        menuPage(m, foods, drinks , o, t, w,TP,DP);

    }
    else if (choice == 3)
    {float price;
        int quantity;
        string name, catagory, size;


        cout<< " Drink Item NAME : " ;
        cin>> name ;
        cout<< " Price : " ;
        cin>> price ;
        cout<< " Quantity : " ;
        cin>> quantity ;
        cout<< " Catagory : " ;
        cin>> catagory ;
        cout<< " Size : : " ;
        cin>> size ;

        cout<< " Item Name : " << name << endl
        << " Item Price : " << price << endl
        << " Item Quantity : " << quantity << endl
        << " Item Catagory : " << catagory << endl
        << " Item Size : " << size << endl;


        drinks.push_back(drinkItem(name, price, quantity, catagory, size));
        m.addItem(&drinks.back());
        cout<<" Item Added Successfuly " <<endl;
        choice = 0;
        while (choice != 1) {
            cout<< "1. Go back -  " ;
            cin>> choice;
        }
        menuPage(m, foods, drinks , o, t, w,TP,DP);
    }

    else if (choice == 4) {
        int c;

        m.displayMenu();

        cout << "Enter item number to remove: ";
        cin >> c;

        m.removeItem(c);

        cout << "Item removed successfully" << endl;

        choice = 0;
        while (choice != 1) {
            cout << "1. Go back - ";
            cin >> choice;
        }

        menuPage(m, foods, drinks, o, t, w, TP, DP);
    }


    else if ( choice == 0) {
        mainPage(m, foods, drinks , o, t, w,TP,DP);
    }
}
