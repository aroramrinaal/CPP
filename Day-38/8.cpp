#include<iostream>
using namespace std;

void myFunction();  //Prototyping
int main()
{
    /* code */
    myFunction();
    return 0;
}


void myFunction(){
    cout<<"I just got executed!\n";
}