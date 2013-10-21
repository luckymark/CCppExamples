#include "Menu.h"

#include <iostream>
using namespace std;

Menu::~Menu(){
    for(auto &item:items){
        delete item;
    }
}

void Menu::append(MenuItem* mi){
    this->items.push_back(mi);
}

int Menu::run(){
    int index;
    while(1){
        this->show();
        cin>>index;
        if(!cin || index<1 || index>items.size()){
            cout << "错误的菜单项，请重新输入："<<endl;
            if(!cin){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            continue;
        }
        if(items[index-1]->act()) break;
    }
    return 0;
}

void Menu::show(){
    int i=0;
    for(auto &item:items){
        cout<< ++i <<")" <<item->getCaption() <<endl;
    }
}
