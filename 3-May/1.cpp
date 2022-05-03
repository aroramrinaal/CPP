#include<iostream>
using namespace std;

class MyClass
{
    public:
    void myFunction(){
        cout << "Some content in parent class.\n" ;
    }
};

class MyOtherClass 
{
    public:
    void myOtherFunction(){
        cout << "Some content in other class." ;
    }
};


class MyChildClass : public MyClass,public MyOtherClass{};

int main()
{
    /* code */
    MyChildClass obj1;
    obj1.myFunction();
    obj1.myOtherFunction();
    return 0;
}
