#include "foodItem.h"
#include <iostream>

using namespace std;

//constructor
foodItem::foodItem(string n,float p,int q,string c ,bool spicy,int cal):menuItem(n,p,q,c) {
    isSpicy=spicy;
    calories=cal;
}

//change spicy value
void foodItem::setIsSpicy(bool spicy) {
    isSpicy= spicy;
}

//change calories
void foodItem::setCalories(int cal) {
    calories=cal;
}

//get spicy value
bool foodItem::getIsSpicy() {
    return isSpicy;
}

//get calories
int foodItem::getCalories() {
    return calories;
}


void foodItem::displayFood() {
    cout<<"Item:"<< getName()<< " (ID:" << getItemID() << ")"<< endl;
    cout<<"Price: $" << getPrice()<< " | Qty: "<< getQuantity()<< endl;
    cout<<"Calories: "<< calories<< endl;
    cout<<"Spicy Level: " << (isSpicy ? "Spicy" : "Mild")<< endl;
    cout<<"--------------------------"<< endl;
}