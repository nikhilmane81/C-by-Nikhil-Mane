#include<iostream>
using namespace std;
int factorial(int n)
{
    if (n<1)
    {
        return 1;
    }
    return (n * factorial(n-1));   //function calling function
}
int main()
{
    int a;
    cout<<"Enter number to find factorial of the same "<<endl;
    cin>>a;
    cout<<"Factorial of the entered number is "<<factorial(a)<<endl;
    return 0;
}