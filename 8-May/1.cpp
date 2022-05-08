// Object-Oriented Programming

#include<iostream>
using namespace std;


class Circle
{
    public:
    double radius;
    void getRadius();
    double getArea();
};

void Circle :: getRadius(){
    cout<<radius;
}
double Circle ::getArea(){
    return radius*radius*(3.14);
}

int main()
{
    /* code */
    Circle c1;
    c1.radius = 7;
    cout<<c1.getArea();
    return 0;
}
