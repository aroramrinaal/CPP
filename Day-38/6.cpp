#include<iostream>
using namespace std;
int main()
{
    /* code */
    int number , sum = 0;
    cout<<"Enter a positive number :\n";
    cin>>number;
    while (number>0)
    {
        /* code */
        sum = sum + (number%10);
        number = number/10;
    }
    cout<<"Sum Of digits is:"<<sum;
    return 0;
}