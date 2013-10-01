#include "ListWareHouse.h"

#include "ComputerSales.h"

extern ComputerSales cs;

ListWareHouse::ListWareHouse()
{
    this->caption = "查看库存";
}

void ListWareHouse::act(){
    cs.getWareHouse().list();
}
