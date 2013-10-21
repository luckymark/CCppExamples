#include "ComputerSales.h"

#include "ListWareHouse.h"
#include "EnterWareHouse.h"
#include "OutWareHouse.h"
#include "Exit.h"

#include <iostream>
using namespace std;

ComputerSales::ComputerSales(){
    menu.append(new ListWareHouse());
    menu.append(new EnterWareHouse());
    menu.append(new OutWareHouse());
    menu.append(new Exit());
}

int ComputerSales::run(){
    return menu.run();
}
