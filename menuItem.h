//
// Created by abdul on 4/20/2026.
//

#ifndef OOP_PROJECT_YEAR1_MENUITEM_H
#define OOP_PROJECT_YEAR1_MENUITEM_H
#include <string>
using namespace std;
#include <vector>

class menuItem {
    protected:
    float price;
    int quantity, itemID;
    static int count;
    string name, category;
    vector<string> categories = {"Appetizer", "Main Course", "Dessert", "Drink"};
    public:
    menuItem(string n,float p, int q );
    static void resetCounter();
    void setPrice(float );
    void addQuantity(int );
    void setName(string );
    void setCategory(int s);
    void addCategory(string);
    void deleteCategory(int);
    void setQuantity(int );


    string getCategory( );
    string getName();
    float getPrice();
    int getQuantity();
    int getItemID();






};


#endif //OOP_PROJECT_YEAR1_MENUITEM_H