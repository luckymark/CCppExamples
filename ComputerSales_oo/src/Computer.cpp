#include "Computer.h"

#include <iostream>
using namespace std;

void Computer::input(){
    cout<<"型号：";
    cin>>this->model;
    
    cout<<"数量：";
    cin>>this->total;
}
