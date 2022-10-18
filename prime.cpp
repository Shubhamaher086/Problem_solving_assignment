#include <iostream>
using namespace std;

int main()
{
    int no, count;
    cout << "Enter the number to check prime number : ";
    cin >> no;                          //Accpet number to check

    for (int i = 2; i <= no; i++)       
    {
        if (no % 2 == 0)                //check number is exactly divisible by itself or any other number also
        {
            count++;
        }
    }
    if (count == 1)                     //if only divisible by itself then is prime number
    {
        cout << "\nThe given number "<< no <<" is a prime number" << endl;
    }
    else
        cout << "\nThe given number "<< no <<" is a non-prime number" << endl;//else is non prime number
}