#ifndef ENTERWAREHOUSE_H
#define ENTERWAREHOUSE_H

#include "MenuItem.h"

#include "ComputerSales.h"
extern ComputerSales cs;

class EnterWareHouse:public MenuItem
{
    public:
        EnterWareHouse(){
            this->caption="电脑入库";
        }
        virtual void act(){
            cs.getWareHouse().in();
        }
    protected:
    private:
};

#endif // ENTERWAREHOUSE_H
