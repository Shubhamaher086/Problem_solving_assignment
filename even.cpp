// write a program to accept a number and check given number is even number
#include <iostream>
using namespace std;

int main()
{
    long int num;
    cout << "Enter the number to check : ";
    cin >> num;                                 //accpet the number
    

    if (num >= 0)                               //compare if number is greater than equal to 0
    {
        if (num == 0 || (num%2 == 0))
        {
            cout << "number is even" << endl;   //print if number is even 
        }
        else
        {
            cout << "Given number is not even" << endl;
        }
    }
    else
    cout << "The given number is not a whole number" << endl;//if number is negative number

    return 0;
}