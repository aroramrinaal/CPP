#include<iostream>
using namespace std;

class MyClass
{
    public:
    void myFuction(){
        cout<<"Some content in Myclass"<<endl;
    }
};


class MyOtherClass
{
    public:
    void myOtherFuction(){
        cout<<"Some content in MyOtherClass"<<endl;
    }
};

class MyChildClass : public MyClass , public MyOtherClass
{

};

int main()
{
    /* code */
    MyChildClass obj1;
    obj1.myFuction();
    return 0;
}
