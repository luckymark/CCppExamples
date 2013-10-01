#include "WareHouse.h"

#include <iostream>
using namespace std;

WareHouse::WareHouse()
{
    //ctor
}

void WareHouse::list()
{
    cout<<"-------库存-------"<<endl;
    cout<<"型号\t"<<"数量"<<endl;

    for(int i=0; i<computers.size(); i++)
    {
        cout<<computers[i].getModel()<<"\t"<<computers[i].getTotal()<<endl;
    }
    cout<<"-------库存-------"<<endl;
}
