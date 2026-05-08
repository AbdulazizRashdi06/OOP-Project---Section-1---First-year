#include <iostream>
#include "menuItem.h"
#include <iostream>
#include "menu.h"
#include "foodItem.h"
#include "drinkItem.h"
#include "order.h"
#include "table.h"
#include "waiter.h"
#include "pages.h"
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    menu restaurantMenu;

    vector<foodItem> foods;
    vector<drinkItem> drinks;
    vector<order> orders;
    vector<table> tables;
    vector<waiter> waiters;

    float taxPercent = 5;
    float discountPercent = 0;

    tables.push_back(table(1, 4));
    tables.push_back(table(2, 2));

    waiters.push_back(waiter("Ahmed"));
    waiters.push_back(waiter("Salim"));

    mainPage(restaurantMenu, foods, drinks, orders, tables, waiters, taxPercent, discountPercent);

    return 0;
}
