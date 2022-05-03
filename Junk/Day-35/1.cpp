#include<iostream>
using namespace std;

int main() {
    int a = 50, b = 20;
    // cin >> a, b;
    int addition = a + b;
    int subtraction = a - b;
    int mul = a * b;
    int division = a / b;
    int modulus = a % b;
    cout << "The addition of " << a << " and " << b << " is: " << addition<<endl;
    cout << "The subtraction of " << a << " and " << b << " is: " << subtraction<<endl;
    cout << "The multiplication of " << a << " and " << b << " is: " << mul<<endl;
    cout << "The division of " << a << " and " << b << " is: " << division<<endl;
    cout << "The modulus of " << a << " and " << b << " is: " << modulus;
    return 0;
}
