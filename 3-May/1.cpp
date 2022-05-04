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
};


class Employee : public Person
{

};


int main()
{
    /* code */

    return 0;
}
