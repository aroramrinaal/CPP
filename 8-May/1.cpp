// Object-Oriented Programming
#include<iostream>
using namespace std;


class Circle
{
    public:
    Circle(){
        radisu = 7
    }
    double radius;
    string color;
    void getRadius(){
        cout<<radius;
    }
    double getArea();
};

double Circle :: getArea(){
    return radius*radius*(3.14);
}



int main()
{
    /* code */

    return 0;
}

