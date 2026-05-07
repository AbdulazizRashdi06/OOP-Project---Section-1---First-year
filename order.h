//
// Created by User on 4/29/2026.
//

#ifndef OOP_PROJECT_YEAR1_ORDERS_H
#define OOP_PROJECT_YEAR1_ORDERS_H
#include <string>
#include <vector>
using namespace std;

class menuItem;

class order {
private:
    int orderID;
    vector<menuItem*> orderedItems;
    string status;
    static int count;
public:
    order();
    static void resetCounter();
    void addItem(menuItem* item);
    void removeItem(int itemID);
    void setStatus(string s);
    string getStatus();
    float calculateTotal();
    int getOrderID();
    void displayOrder();

};


#endif //OOP_PROJECT_YEAR1_ORDERS_H