//
// Created by whz2y on 4/28/2026.
//

#ifndef OOP_PROJECT_YEAR1_FOODITEM_H
#define OOP_PROJECT_YEAR1_FOODITEM_H


#include "menuItem.h"

class foodItem : public menuItem {
private:
    bool isSpicy;
    int calories;

public:
    foodItem(string n, float p, int q, string c, bool spicy, int cal);

    void setIsSpicy(bool spicy);
    void setCalories(int cal);

    bool getIsSpicy();
    int getCalories();

    void displayFood();
};


#endif //OOP_PROJECT_YEAR1_FOODITEM_H