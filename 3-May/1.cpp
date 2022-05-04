#include<iostream>
using namespace std;

class Person
{
    protected:
    char name[50];
    public:
    void getdata(){
        cout<<"Enter name:";
        cin>>name;
    }

    void display(){

    }
};


class Employee : public Person
{

};


int main()
{
    /* code */
    
    return 0;
}
