#include<iostream>
using namespace std;

class Vehicle
{
    public:
    Vehicle(){
        cout<<"This is a vehicle.\n";
    }
};


class Car : public Vehicle
{

};


class Bus : public Vehicle
{

};


int main(){
    Car obj1;
    Bus obj2;
    return 0;
}
