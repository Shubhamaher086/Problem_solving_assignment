// Write a program to accept a number N and print the first N terms of the Fibonacci series.

#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, c, n;

    cout << "Enter number of elements:";
    cin >> n;
    cout << a << " " << b;

    for (int i = 2; i < n; i++)
    {
        c = a + b;
        cout << " " << c;
        a = b;
        b = c;
    }

    return 0;
}