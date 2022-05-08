#include<iostream>
using namespace std;

// Object-Oriented Programming

class Student
{
    public:
    string name;
    string grade;
    void getName(){
        cout<<name;
    }
    void printGrade(){
        cout<<grade;
    }
};


int main()
{
    /* code */
    Student obj1;
    obj1.grade = "A";
    obj1.printGrade();
    return 0;
}

