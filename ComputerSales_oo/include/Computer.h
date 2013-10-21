#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>
using std::string;

class Computer
{
public:
    string getModel()
    {
        return this->model;
    }
    int getTotal()
    {
        return this->total;
    }
    void add(int num)
    {
        this->total+=num;
    }
    void sub(int num)
    {
        this->total-=num;
    }
    void input();
    
private:
    string model;
    int total;
};

#endif // COMPUTER_H
