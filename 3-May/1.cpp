#include<iostream>
using namespace std;


class Vehicle
{
    private:
    int rc_no;
    public:
    string company;
    void getinfo(){
        cout<<"Enter rcno."<<endl;
        cin>>rc_no;
    }
    void displayinfo(){
        cout<<"Registration Number is: "<<rc_no;
    }
};

class Car : public Vehicle
{
    public:
    string modelname;
};

int main()
{
    /* code */
    return 0;
}
