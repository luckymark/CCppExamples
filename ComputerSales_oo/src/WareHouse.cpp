#include "WareHouse.h"

#include <iostream>
using namespace std;

WareHouse wareHouse;

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
    Computer* temp = new Computer;
    temp->input();
    
    Computer* result = this->find(temp);
    if(result == NULL){
        this->computers.push_back(temp);
    }else{
        result->add(temp->getTotal());
        delete temp;
    }
}

void WareHouse::out(){
    Computer* temp = new Computer;
    temp->input();
    
    Computer* result = this->find(temp);
    if(result == NULL){
        cout<<"型号错误！"<<endl;
    }else{
        result->sub(temp->getTotal());
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
