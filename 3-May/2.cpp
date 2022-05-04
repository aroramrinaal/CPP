#include<iostream>
using namespace std;

class Animal
{
    public:
    void eat(){
        cout<<"Animals eat()";
    }
    void sleep(){
        cout<<"Animals sleep()";
    }
};

class Dog: public Animal
{};


int main()
{
    /* code */

}
