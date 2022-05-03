// Inheritance in C++

// Inheritance in C++

// Inheritance in C++

#include<iostream>
using namespace std;



class Vehicle
{
    public:
    void whatIsThis(){
        cout<<"This is a Vehicle."<<endl;
    }
};


class Car : public Vehicle
{};

int main()
{
    /* code */
    Car obj1;
    obj1.whatIsThis();
    return 0;
}
