#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>
using namespace std;

class Computer
{
public:
    Computer();
    string getModel()
    {
        return this->model;
    }
    int getTotal()
    {
        return this->total;
    }
    void addTotal(int num)
    {
        this->total+=num;
    }
    void input();
protected:
private:
    string model;
    int total;
};

#endif // COMPUTER_H
