#include<iostream>
using namespace std;

class Person
{
    public:
    string name;
    int age;
    protected:
    int regno;
    private:
    int passcode;
    public:
    
};


class Employee : public Person
{

};


int main()
{
    /* code */
    Employee myEmployee;
    myEmployee.passcode;
    return 0;
}
