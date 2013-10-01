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
    protected:
    private:
        vector<Computer> computers;
};

#endif // WAREHOUSE_H
