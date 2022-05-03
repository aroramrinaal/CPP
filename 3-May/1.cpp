// Inheritance in C++

// Inheritance in C++


#include<iostream>
using namespace std;

class A
{
    public:
    int x;
    protected:
    int y;
    private:
    void printmyName(){
        cout<<"Mrinaal"<<endl;
    }
};


class B :public A
{
    // x is public
    // y is protected
    // z is private
};

int main(){
    B obj1;
    obj1.x;
}