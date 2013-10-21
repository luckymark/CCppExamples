#ifndef LISTWAREHOUSE_H
#define LISTWAREHOUSE_H

#include "MenuItem.h"

#include "WareHouse.h"

class ListWareHouse:public MenuItem{
public:
    ListWareHouse():MenuItem("查看库存"){}
    bool act(){
        wareHouse.list();
        return false;
    }
};

#endif // LISTWAREHOUSE_H
