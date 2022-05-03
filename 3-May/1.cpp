#include<iostream>
using namespace std;


class Myclass
{
    public:
    void myFunction(){
        cout<<"Content Defined Under Parent Class";
    }
};

class Mychild : public Myclass
{

};


class MyGrandChild : public Mychild
{

};

class inheritedclassofsubclass : public MyGrandChild
{

};


int main()
{
    /* code */
    inheritedclassofsubclass myobj1;
    myobj1.myFunction();
    return 0;
}
