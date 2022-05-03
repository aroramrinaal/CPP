// Inheritance in C++

#include<iostream>
using namespace std;

class Vehicle
{
    public:
    void fuelAmount(){
        cout<<"What's the maximum fuel that can be added to this Vehicle."<<endl;
    }
    void capacity(){
        cout<<"What's the maximum capacity of this vehicle?"<<endl;
    }
};


class Car : public Vehicle
{};

class Bus : public Vehicle
{};

class Truck : public Vehicle
{};

int main(){
    
    return 0;
}