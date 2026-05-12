//
// Created by abdul on 5/12/2026.
//

#include "InputValidation.h"

#include <iostream>
#include <ostream>
using namespace std;
#include <string>


int intInput(string m , int min, int max) {
    int n;
    cout<<m<<endl;

    while (true) {
        cin >> n ;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout<<"invalid input"<<endl;
        }
        else if (n > max || n < min) {
            cout<<"invalid number"<<endl;
         continue;
        }
        else {
            return n;
        }
    }
}


float floatInput(string m , float min, float max) {
    float n;
    cout<<m<<endl;

    while (true) {
        cin >> n ;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout<<"invalid input"<<endl;
        }
        else if (n > max || n < min) {
            cout<<"invalid number"<<endl;
            continue;
        }
        else {
            return n;
        }
    }
}
