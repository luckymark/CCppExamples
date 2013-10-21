#ifndef ENTERWAREHOUSE_H
#define ENTERWAREHOUSE_H

#include "MenuItem.h"

#include "WareHouse.h"

class EnterWareHouse:public MenuItem{
public:
    EnterWareHouse():MenuItem("电脑入库"){}
    virtual bool act(){
        wareHouse.in();
        return false;
    }
};

#endif // ENTERWAREHOUSE_H
