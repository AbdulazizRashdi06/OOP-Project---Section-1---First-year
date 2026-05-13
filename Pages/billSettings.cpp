#include <iostream>
#include "pages.h"

using namespace std;

void billSettings(menu &m,
                  vector<foodItem> &foods,
                  vector<drinkItem> &drinks,
                  vector<order> &o,
                  vector<table> &t,
                  vector<waiter> &w,
                  float &TP,
                  float &DP)
{
    int choice;
    do
    {
        cout<<"\n===== Bill Settings =====" <<endl;
        cout<<"1- Set tax percentage" <<endl;
        cout<<"2- Set discount percentage" << endl;
        cout<<"3- Show current settings" <<endl;
        cout<<"4- return to main page" <<endl;
        cout<<"Enter choice:";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<< "enter tax percentage: ";
                cin>> TP;
                cout<<"Tax updated successfully." <<endl;
                break;
                
            case 2:
                cout<< "enter discount percentage: ";
                cin >> DP;
                cout<< "discount updated successfully." <<endl;
                break;

            case 3:
                cout<< "current tax percentage: "<<TP<<"%"<<endl;
                cout<< "current discount percentage: "<< DP<<"%"<<endl;
                break;

            case 4:
                mainPage(m,foods,drinks,o, t,w,TP,DP);
                break;

            default:
                cout<<"Invalid choice!!"<<endl;
        }

    } while(choice != 4);
}
