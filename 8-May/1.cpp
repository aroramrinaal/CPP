#include<iostream>
using namespace std;

// Object-Oriented Programming

class Class1
{
    public:
    string data1;
    int data2;
    void function1(){
        cout<<"Let's Go Function1";
    }
    void function2(){
        cout<<"Let's Go Function2";
    }
};


int main()
{
    /* code */
    Class1 obj1;
    obj1.function2();
    return 0;
}

