#ifndef MENU_H
#define MENU_H

#include <vector>

#include "MenuItem.h"

class Menu{
public:
    virtual ~Menu();
    void append(MenuItem* mi);
    int run();
private:
    void show();
    
    vector<MenuItem*> items;
};

#endif // MENU_H
