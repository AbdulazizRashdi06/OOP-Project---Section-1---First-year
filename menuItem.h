//
// Created by abdul on 4/20/2026.
//

#ifndef OOP_PROJECT_YEAR1_MENUITEM_H
#define OOP_PROJECT_YEAR1_MENUITEM_H
#include <string>
using namespace std;


class menuItem {
    float price;
    int quantity, itemID;
    static int count;
    string name;
    public:
    menuItem(string n,float p, int q );
    void resetCounter();
    void setPrice(float );
    void addQuantity(int );
    void setName(string );
    string getName();
    float getPrice();
    int getQuantity();
    void setQuantity(int );
    int getItemID();






};


#endif //OOP_PROJECT_YEAR1_MENUITEM_H