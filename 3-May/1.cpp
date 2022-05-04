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
    void hello(){
        cout<<passcode;
    }
};


class Employee : public Person
{

};


int main()
{
    /* code */
    Person myobj;
    myobj.hello();
    // myEmployee.passcode;
    return 0;
}
