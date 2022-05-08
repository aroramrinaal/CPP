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
    Employee obj1;
    obj1.employeeName();
    return 0;
}

