#include<iostream>
using namespace std;
int findSum(int a ,int b){
   int c = a + b;
   return c; 
}
int main()
{
    /* code */
    int num1 , num2;
    cout<<"Enter First Number:"<<endl;
    cin>>num1;
    cout<<"Enter Second Number:"<<endl;
    cin>>num2;
    cout<<"Sum of two numbers is:"<<findSum(num1,num2)<<endl;
    return 0;
}