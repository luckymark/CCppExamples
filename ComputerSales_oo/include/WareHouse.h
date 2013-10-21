#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <vector>
using namespace std;

#include "Computer.h"

class WareHouse
{
    public:
        WareHouse();
        void list();
        void in();
        void out();
    private:
        vector<Computer *> computers;

        Computer* find(Computer* computer);
};

#endif // WAREHOUSE_H
