#ifndef OUTWAREHOUSE_H
#define OUTWAREHOUSE_H

#include "MenuItem.h"

class OutWareHouse:public MenuItem
{
    public:
        OutWareHouse(){
            this->caption = "售出";
        };
        void act(){};
    protected:
    private:
};

#endif // OUTWAREHOUSE_H
