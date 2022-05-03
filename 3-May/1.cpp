#include<iostream>
using namespace std;


class Vehicle
{
    public:
    string brand;
    void honk(){
        cout<<"Tuut, tuut! \n";
    }
};

class Car : public Vehicle
{
    public:
    string model;
    void printSpecialProperty(){
        cout<<"4 Wheeler\n";
    }
};

int main()
{
    /* code */
    Car mycar;
    mycar.honk();
    mycar.brand = "Ford";
    mycar.model = "Mustang";
    cout<<"Brand of my car is: "<<mycar.brand<<"\n";
    cout<<"Model of my car is: "<<mycar.model<<"\n";
    return 0;
}
