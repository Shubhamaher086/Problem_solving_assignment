// Write a program to accept a number N and print the first N natural numbers.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;                                           // Accept the number

    if (n < 0)                                          // check number should be positive
    {
        cout << "please enter positive number" << endl;
        exit(0);
    }
    cout << "Natural numbers from 1 to " << n << " are : ";

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";                              // print the numbers
    }

    return 0;
}