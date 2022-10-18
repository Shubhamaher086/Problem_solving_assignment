// Write a program to accept 2 numbers A,B and check if A is divisible by B.

#include <iostream>
using namespace std;

int main()
{
    int A, B, ans;
    cout << "Enter the number to be divisible : ";      //accept two numbers
    cin >> A;
    cout << "\nEnter the number divide by : ";
    cin >> B;

    if (B == 0)                                         //checking for condition that divisor should not be 0
    {
        cout << "It is not possible to divide any number by 0" << endl;
    }

    else if (A % B == 0)                                
    {
        ans = A / B;                                    //if successfully divisible then check for condition
        cout << A << " is divisible by " << B << endl;
        cout << "\nA divide by B is equal to : " << ans << endl;
    }
    else
    {
        cout << A << " is not divisible by " << B << endl;
    }
    return 0;
}