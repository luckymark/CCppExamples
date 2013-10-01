#ifndef ENTERWAREHOUSE_H
#define ENTERWAREHOUSE_H

#include "MenuItem.h"

class EnterWareHouse:public MenuItem
{
    public:
        EnterWareHouse(){
            this->caption="电脑入库";
        }
        virtual void act(){};
    protected:
    private:
};

#endif // ENTERWAREHOUSE_H
