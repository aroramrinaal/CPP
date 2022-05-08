// Object-Oriented Programming
#include<iostream>
using namespace std;


class Circle
{
    public:
    Circle(){
        radius = 10;
        color = "blue";
    }
    double radius;
    string color;
    void getRadius(){
        cout<<radius<<endl;
    }
    void getColor(){cout<<color<<endl;}
    double getArea();
};

double Circle :: getArea(){
    return radius*radius*(3.14);
}



int main()
{
    /* code */
    Circle c1;
    c1.getRadius();
    c1.getColor();
    return 0;
}

