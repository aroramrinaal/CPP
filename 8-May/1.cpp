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


int main()
{
    /* code */
    Student paul;
    Student peter;
    paul.name = "Paul Lee";
    paul.grade = 3.5;
    peter.name = "Peter Tan";
    peter.grade = 3.9;
    paul.getName();
    peter.getName();
    return 0;
}

