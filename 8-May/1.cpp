// Object-Oriented Programming

#include<iostream>
using namespace std;


class Circle
{
    public:
    double radius;
    string color;
    void getRadius();
    double getArea();
    void display(){
        cout<<"Radius:"<<radius<<endl;
        cout<<"Color:"<<color<<endl;
        cout<<"Area:"<<getArea()<<endl;
    }
    Circle(){
        radius = 7;
        color = "Red";
    }
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
        // c1.radius = 7;
        // cout<<c1.getArea();
    c1.display();
    return 0;
}
