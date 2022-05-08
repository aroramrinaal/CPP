// Object-Oriented Programming

#include<iostream>
using namespace std;


class Person
{
    public:
    string name;
    int age;
    void getNameAndGreet();
};

void Person :: getNameAndGreet(){
    cout<<"enter name:"<<endl;
    cin>>name;
    cout<<"Hello "<<name<<endl;
}

int main()
{
    /* code */
    Person obj1;
    obj1.getNameAndGreet();
    return 0;
}

