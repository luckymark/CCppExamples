#ifndef COMPUTERSALES_H
#define COMPUTERSALES_H

#include "wareHouse.h"

#include "Menu.h"

class ComputerSales
{
    public:
        ComputerSales();
        void run();
        WareHouse getWareHouse(){
            return wareHouse;
        }
    protected:
    private:
        Menu menu;
        WareHouse wareHouse;
};

#endif // COMPUTERSALES_H
