//
// Created by abdul on 4/20/2026.
//

#ifndef OOP_PROJECT_YEAR1_MENU_H
#define OOP_PROJECT_YEAR1_MENU_H
#include <vector>

#include "menuItem.h"
using namespace std;
using std::vector;


class menu {

    vector<menuItem> items;
    public:
    menu();
    ~menu();
    void addItem(menuItem item);
    void removeItem(menuItem item);
    void removeAllItems();
    void deisplayMenu();


   menuItem getItem(int);







};


#endif //OOP_PROJECT_YEAR1_MENU_H