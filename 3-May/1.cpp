#include<iostream>
using namespace std;


class Baseclass
{
    public:
    void display(){
        cout<<"This display is inside the base class."<<endl;
    }
    protected:
    void hiddencontent(){
        cout<<"This is hidden content"<<endl;
        
    }
    private:
    void thisistopsecret(){
        cout<<"Catch me if you can."<<endl;
    }
};

class DerivedClass:public Baseclass
{
    public:
    void show(){
        cout<<"This show is inside the second class which is derived from parent class" << endl;
    }
    void checker(){
        hiddencontent();
        
    }
};

int main()
{
    /* code */
    Baseclass obj1;
    DerivedClass obj2;
    obj2.checker();
    return 0;
}
