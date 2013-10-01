#ifndef MENUITEM_H
#define MENUITEM_H

#include <string>
using namespace std;

class MenuItem
{
public:
    string getCaption(){
        return caption;
    }
    virtual bool isExit()
    {
        return false;
    };
    virtual void act() = 0;
protected:
    string caption;
};

#endif // MENUITEM_H
