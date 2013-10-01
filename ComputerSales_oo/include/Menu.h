#ifndef MENU_H
#define MENU_H

#include <vector>
#include <string>
using namespace std;

#include "MenuItem.h"

class Menu
{
    public:
        Menu();
        void append(MenuItem* mi);
        void run();
    protected:
    private:
        void show();

        vector<MenuItem*> items;
};

#endif // MENU_H
