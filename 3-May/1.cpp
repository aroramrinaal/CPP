// Inheritance in C++

// Inheritance in C++

// Inheritance in C++

#include<iostream>
using namespace std;

class Vehicle
{
    public:
    Vehicle(){
        cout<<"this is a vehicle."<<endl;
    }
};

class FourWheeler
{
    public:
    FourWheeler(){
        cout<<"this is a fourwheeler."<<endl;
    }
};


class Car :public Vehicle,public FourWheeler
{};

int main()
{
    /* code */

}
