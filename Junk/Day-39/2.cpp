#include<iostream>
using namespace std;

int avg(int a , int b , int c);
int main()
{
    int num1=10, num2=4 ,num3=7;
    int average = avg(num1,num2,num3);
    cout<<"Average of three numbers is:"<<average<<endl;
    return 0;
}

int avg(int a , int b , int c){
    return(a+b+c)/3;
}