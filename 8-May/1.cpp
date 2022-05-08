// Object-Oriented Programming

#include<iostream>
using namespace std;


class Person
{
   protected:
   char name[50];
   public:
   void getData(){
       cout<<"Enter Name:"<<endl;
       cin>>name;
   }
   void display(){
       cout<<"Name:"<<name<<endl;
   }
   private:
   string sex;
};

class Employee : public Person
{
    public:
    void employeeName(){
        cout<<name;
    }
};



int main()
{
    /* code */
    Person obj1;
    obj1.getData();
    // Employee obj2;
    // obj2.employeeName();
    return 0;
}