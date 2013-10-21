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
    
    for(int i=0; i<this->computers.size(); i++)
    {
        cout<<this->computers[i]->getModel()<<"\t"<<this->computers[i]->getTotal()<<endl;
    }
    cout<<"-------库存-------"<<endl;
}

void WareHouse::in(){
    Computer* computer = new Computer;
    computer->input();
    
    Computer* c = this->find(computer);
    if(c == NULL){
        this->computers.push_back(computer);
    }else{
        c->addTotal(computer->getTotal());
        delete computer;
    }
}

void WareHouse::out(){
    Computer* computer = new Computer;
    computer->input();
    
    Computer* c = this->find(computer);
    if(c == NULL){
        cout<<"型号错误！"<<endl;
    }else{
        c->addTotal(- computer->getTotal());
    }
}

Computer* WareHouse::find(Computer* computer){
	for(int i=0;i<computers.size();i++){
		if(computers[i]->getModel() == computer->getModel()){
			return computers[i];
		}
	}
	return NULL;
}
