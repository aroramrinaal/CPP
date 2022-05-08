// Object-Oriented Programming
#include<iostream>
using namespace std;


class Circle
{
    public:
    Circle(){
        radius = 7;
        color = "red";
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
    Circle c;
    c.getRadius();
    return 0;
}

