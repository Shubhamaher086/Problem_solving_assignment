//Write a program to accept 2 numbers a A,B and calculate A ^ B(A to the power B) .
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float A, B, result;

    // Accept the numbers and power number
    cout << "enter the number whose power to be calculate :";
    cin >> A;
    cout << "enter the number use as power : ";
    cin >> B;

    result = pow(A, B);         //use pow function from cmath header file
    cout << "Result of "<< A <<"^"<< B << " is :"<<result << endl;     //display result
    return 0;
}