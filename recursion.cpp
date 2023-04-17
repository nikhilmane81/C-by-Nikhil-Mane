#include<iostream>
using namespace std;
double factorial(double n)
{
    if (n<1)
    {
        return 1;
    }
    return (n * factorial(n-1));   //function calling function
}
int main()
{
    double a;
    cout<<"Enter number to find factorial of the same "<<endl;
    cin>>a;
    cout<<"Factorial of the entered number is "<<factorial(a)<<endl;
    return 0;
}