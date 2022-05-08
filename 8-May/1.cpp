// Object-Oriented Programming
#include<iostream>
using namespace std;


class StudentMarks
{
    public:
    void displayMarks();
    int maths;
    int science;
    StudentMarks(){
        maths = 0;
        science =0;
    }
};

void StudentMarks ::displayMarks(){
    cout<<"Maths:"<<maths<<endl;
    cout<<"Science:"<<science<<endl;
}

int main()
{
    /* code */
    StudentMarks m;
    m.displayMarks();
    return 0;
}

