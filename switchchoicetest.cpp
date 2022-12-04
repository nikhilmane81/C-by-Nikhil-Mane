#include<iostream>
using namespace std;
int main()
{
    while(true)
    {
    int a,b,c,d,i,choice;
    cout<<"Enter 1 for addition of two numbers"<<endl;
    cout<<"Enter 2 for multiplication of two numbers"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"Enter first number "<<endl;
            cin>>a;
            cout<<"Enter second number "<<endl;
            cin>>b;
            c=a+b;
            cout<<"Sum of two numbers is "<<c<<endl;
            break;

        case 2:
            cout<<"Enter first number "<<endl;
            cin>>a;
            cout<<"Enter second number "<<endl;
            cin>>b;
            c=a*b;
            cout<<"Multiplication of two numbers is "<<c<<endl;
            break; 
        default:
            cout<<"Incorrect input please check again"<<endl;
            break;
    }
    }
return 0;
}