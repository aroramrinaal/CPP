#include<iostream>
using namespace std;

int main()
{
    /* code */
    int principal , time;
    float rate , si;
    cout<<"Enter Principal: "<<endl;
    cin>>principal;
    cout<<"Enter Rate of Interest: "<<endl;
    cin>>rate;
    cout<<"Enter Time in years: "<<endl;
    cin>>time;
    si = (principal*rate*time)/100;
    cout<<"Simple Interest : "<<si<<endl;
    
    return 0;
}
