// Inheritance in C++

// Inheritance in C++

// Inheritance in C++

#include<iostream>
using namespace std;

class Vehicle
{
    public:
    void vehicle(){
        cout<<"this is a vehicle."<<endl;
    }
};

class FourWheeler
{
    public:
    void fourWheeler(){
        cout<<"this is a fourwheeler."<<endl;
    }
};


class Car :public Vehicle,public FourWheeler
{};

int main()
{
    /* code */
    Car obj;
    obj.fourWheeler();
    obj.vehicle();
}
