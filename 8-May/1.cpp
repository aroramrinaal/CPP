// Object-Oriented Programming
#include<iostream>
using namespace std;


class StudentMarks
{
    public:
    void displayMarks();
    int maths;
    int science;
    StudentMarks(int mark1,int mark2){
        maths = mark1;
        science =mark2;
    }
};

void StudentMarks ::displayMarks(){
    cout<<"Maths:"<<maths<<endl;
    cout<<"Science:"<<science<<endl;
}

int main()
{
    /* code */
    StudentMarks m(90,85);
    m.displayMarks();
    return 0;
}

