#include "Computer.h"

#include <iostream>
using namespace std;

Computer::Computer()
{
    //ctor
}

void Computer::input()
{
    cout<<"型号：";
    cin>>this->model;

    cout<<"数量：";
    cin>>this->total;
}
