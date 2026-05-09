#include <iostream>
#include <vector>

#include "menu.h"
#include "foodItem.h"
#include "drinkItem.h"
#include "order.h"
#include "table.h"
#include "waiter.h"
#include "pages.h"

using namespace std;

int main() {
    menu restaurantMenu;

    vector<foodItem> foods;
    foods.reserve(100);

    vector<drinkItem> drinks;
    drinks.reserve(100);
    vector<order> orders;
    vector<table> tables;
    vector<waiter> waiters;

    float taxPercent = 5;
    float discountPercent = 0;

    // Starter food items
    foods.push_back(foodItem("Burger", 2.500, 10, "Main", false, 550));
    restaurantMenu.addItem(&foods.back());

    foods.push_back(foodItem("SpicyChicken", 3.000, 8, "Main", true, 700));
    restaurantMenu.addItem(&foods.back());

    foods.push_back(foodItem("Fries", 1.200, 15, "Side", false, 350));
    restaurantMenu.addItem(&foods.back());

    // Starter drink items
    drinks.push_back(drinkItem("Water", 0.500, 20, "Drink", "Small"));
    restaurantMenu.addItem(&drinks.back());

    drinks.push_back(drinkItem("Cola", 0.800, 15, "Drink", "Medium"));
    restaurantMenu.addItem(&drinks.back());

    drinks.push_back(drinkItem("OrangeJuice", 1.000, 12, "Drink", "Large"));
    restaurantMenu.addItem(&drinks.back());

    // Starter tables
    tables.push_back(table(1, 4));
    tables.push_back(table(2, 2));
    tables.push_back(table(3, 6));
    tables.push_back(table(4, 4));

    // Starter waiters
    waiters.push_back(waiter("Ahmed"));
    waiters.push_back(waiter("Salim"));
    waiters.push_back(waiter("Maha"));

    // Optional waiter assignments
    waiters[0].assignTable(&tables[0]);
    waiters[1].assignTable(&tables[1]);

    mainPage(restaurantMenu,
             foods,
             drinks,
             orders,
             tables,
             waiters,
             taxPercent,
             discountPercent);

    return 0;
}
// written by AI for testing purposes