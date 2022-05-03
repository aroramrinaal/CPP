#include<iostream>
using namespace std;

int max(int x , int y){
    if (x>y)
    {
        return x;
    }
    else{
        return y;
    }
    
}

int main()
{
    /* code */
    cout<<max(3,4)<<endl;
    return 0;
}