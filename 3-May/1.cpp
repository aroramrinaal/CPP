#include<iostream>
using namespace std;

class Vehicle
{
    public:
    string companyName;
    void honkSound(){
        cout<<"Tuu,Tuuu,Tu"<<endl;
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