#include<iostream>
using namespace std;


class Baseclass
{
    public:
    void display(){
        cout<<"This display is inside the base class."<<endl;
    }
};

class DerivedClass:public Baseclass
{
    public:
    void show(){
        cout<<"This show is inside the second class which is derived from parent class" << endl;
    }
};

int main()
{
    /* code */
    Baseclass obj1;
    DerivedClass obj2;
    obj2.display();
    obj2.show();
    return 0;
}
