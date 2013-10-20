#ifndef EXIT_H
#define EXIT_H

#include <iostream>
using namespace std;

#include "MenuItem.h"

class Exit:public MenuItem
{
public:
    Exit()
    {
        this->caption = "退出程序";
    }
    void act()
    {
        cout << "退出程序！" << endl;
    }
    bool isExit()
    {
        return true;
    }
protected:
private:
};

#endif // EXIT_H
