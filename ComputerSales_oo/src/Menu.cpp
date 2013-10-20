#include "Menu.h"

#include <iostream>
using namespace std;

Menu::Menu()
{
    //ctor
}

void Menu::append(MenuItem* mi)
{
    items.push_back(mi);
}

void Menu::run()
{
    int index;
    MenuItem* selected;
    while(1)
    {
        this->show();
        cin>>index;
        if(index<1 || index>4)
        {
            cout << "错误的菜单项，请重新输入："<<endl;
            continue;
        }
        selected = items[index-1];
        if(selected->isExit()) break;

        selected->act();
    }
}

void Menu::show()
{
    for(int i=0; i<items.size(); i++)
    {
        cout<< i+1 <<")" <<items[i]->getCaption() <<endl;
    }
}
