#include<iostream>
using namespace std;

// Object-Oriented Programming

class Student
{
   public:
   string name;
   int age;
   string gender;
   void printName(){
       cout<<name;
   }
};

int main()
{
    /* code */
    Student obj1;
    obj1.name="Mrinaal";
    obj1.printName();
}
