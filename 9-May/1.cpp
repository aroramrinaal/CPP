#include<iostream>
using namespace std;

class Marks
{
    public:
    int maths;
    int science;
    Marks(){
        maths = 0;
        science = 0;
    }
    Marks(Marks &t){
        maths = t.maths;
        science= t.science;
    }
    void display(){
        cout<<"Maths: "<<maths<<endl;
        cout<<"Science: "<<science<<endl;
    }
};

int main()
{
    /* code */
    Marks obj1;
    Marks obj2(obj1);
    obj1.display();
    obj2.display();
    return 0;
}
