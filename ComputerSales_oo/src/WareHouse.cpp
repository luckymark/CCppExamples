#include "WareHouse.h"

#include <iostream>
using namespace std;

WareHouse wareHouse;

WareHouse::~WareHouse(){
    for(auto &computer : computers){
        delete computer;
    }
}

void WareHouse::list()
{
    cout<<"-------库存-------"<<endl;
    cout<<"型号\t"<<"数量"<<endl;
    
    //传统的for循环
    for(int i=0; i<this->computers.size(); i++){
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
    //C++11 中新引入的基于范围的for循环，更简介！
	for(auto &item : computers){
		if(item->equal(computer)){
			return item;
		}
	}
	return NULL;
}
