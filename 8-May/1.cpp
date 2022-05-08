#include<iostream>
using namespace std;

// Object-Oriented Programming

class Student
{
    public:
    string name;
    double grade;
    void getName(){
        cout<<name<<endl;
    }
    void printGrade(){
        cout<<grade;
    }
};

class Circle
{
    public:
    double radius;
    string color;
    void getRadius(){
        cout<<radius;
    }
    double getArea(){
        return radius*radius*(3.14);
    }
    void getColor();
};

void Circle :: getColor(){
    cout<<color;
}

int main()
{
    /* code */
    Circle c1;
    c1.color = "red";
    // c1.radius = 7;
    // cout<<c1.getArea();
    c1.getColor();
    return 0;
}

class Person
{
    public:
    string name;
    int age;
};


