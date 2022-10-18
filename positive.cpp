//write a program to check whether given no is positive or negative
#include <iostream>
using namespace std;

int main()
{
    long double num;
    cout << "Enter the number to check : ";
    cin >> num;                                                               //accpet the number
    

    if (!(num == 0))                                           //check if given number is not equal to 0 because 0 is 
    {                                                          // neither negative nor positive
        if (num > 0)                                           // if num is greater than 0 then positive
        {
            cout << "Given number is positive" << endl;
        }
        else
        {
            cout << "Given number is negative" << endl;         // if num is smaller than 0 then negative
        }
    }
    else
        cout << "The given number is neither positive or negative" << endl;

    return 0;
}