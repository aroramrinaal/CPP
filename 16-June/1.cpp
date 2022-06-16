#include<iostream>
using namespace std;
int main(){
    int arr[5],i;
    cout<<"Size of this integer in this compiler is "<<sizeof(int)<<endl;
    for (i=0;i<5;i++)
    {
        /* code */
        cout<<"Address arr["<<i<<"] is "<<&arr[i]<<endl;
        
    }
    
    return 0;
}