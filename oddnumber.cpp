// Write a program to accept a number N and print the first N even numbers.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    if (n < 0)
    {
        cout << "The given input "<< n <<" is not a natural number " << endl;
        exit(0);
    }

    cout << "Even Natural numbers from  to " << n << " are : ";
    
    for (int i = 1; i <= n; i = i + 2)
    {
        cout << i << " ";
    }

    return 0;
}