#ifndef OUTWAREHOUSE_H
#define OUTWAREHOUSE_H

#include "MenuItem.h"

#include "ComputerSales.h"
extern ComputerSales cs;

class OutWareHouse:public MenuItem
{
    public:
        OutWareHouse(){
            this->caption = "售出";
        };
        void act(){
            cs.getWareHouse().out();
        };
    protected:
    private:
};

#endif // OUTWAREHOUSE_H
