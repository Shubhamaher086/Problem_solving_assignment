// Write a program to accept a number N and calculate N!
#include <iostream>
using namespace std;

int main()
{
    int N;
    int ans=1;                      //declare variable to store result
    cout<<"Enter the number : ";
    cin>>N;                         //Accept the number

    if(N<0)                         //check number should be positive
    {
        cout<<"please enter positive number"<<endl;
        exit(0);
    }
    for(int i=1;i<=N;i++)   
    {
        ans=i*ans;                  //calculate the factorial of number
        
    }
    cout<<"factorial of "<< N <<" is : "<<ans<<endl;    
    return 0;
}