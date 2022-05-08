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
};


class Person
{
    public:
    string name;
    int age;
};
int main()
{
    /* code */
    Person obj;
    cout<<"enter a name:\n";
    cin>>obj.name;
    cout<<"enter your age:\n";
    cin>>obj.age;
    cout<<obj.name<<":"<<obj.age<<endl;
    return 0;
}

