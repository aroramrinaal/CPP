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


int main()
{
    /* code */

    return 0;
}
