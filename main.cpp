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



        // Create menu
        menu restaurantMenu;

        // Create menu items
        foodItem burger("Burger", 2.500, 10, "Main Course", false, 550);
foodItem spicyChicken("Spicy Chicken", 3.000, 8, "Main Course", true, 700);
foodItem fries("Fries", 1.200, 15, "Appetizer", false, 350);


        drinkItem water("Water", 0.500, 20, "Drink", "Small");
        drinkItem cola("Cola", 0.800, 15, "Drink", "Medium");

        // Add items to menu using pointers
        restaurantMenu.addItem(&burger);
        restaurantMenu.addItem(&spicyChicken);
        restaurantMenu.addItem(&fries);
        restaurantMenu.addItem(&water);
        restaurantMenu.addItem(&cola);

        // Create one current order
        order currentOrder;

        // Create one table
        table currentTable(1, 4);

        // Create one waiter
        waiter currentWaiter("Ahmed");

        // Assign waiter to table if your waiter uses table pointer
        currentWaiter.assignTable(&currentTable);

        // Start page navigation
        mainPage(restaurantMenu, currentOrder, currentTable, currentWaiter);

        return 0;
    }

    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
