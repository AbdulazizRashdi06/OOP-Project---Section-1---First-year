#ifndef DRINKITEM_H
#define DRINKITEM_H
#include "menuItem.h"

class drinkItem : public menuItem {
private:
    string size;

public:
  drinkItem(string n, float p, int q, string c, string sz);

  void setSize(string sz);
  string getSize();

   void displayItem() override;
};

#endif
