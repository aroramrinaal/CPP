#include<iostream>
using namespace std;

int main()
{
    int principal, time;
    double rate, si;
    cout << "Enter Principal Amount: ";
    cin>>principal;
    cout<<"Enter Rate of Interest: ";
    cin>>rate;
    cout<<"Enter time period :";
    cin>>time;
    si = (principal * rate * time) / 100;
    cout << "Simple Interest: " << si;
    /* code */
    return 0;
}
