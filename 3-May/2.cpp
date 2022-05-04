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
{
    public:
    void bark(){
        
    }
};


int main()
{
    /* code */

}
