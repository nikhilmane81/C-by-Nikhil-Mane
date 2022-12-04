#include<iostream>
using namespace std;
int main()
{
    int choice,a,b,i,t;
    cout<<"Press 1 to add two numbers"<<endl;
    cout<<"Press 2 to find square of entered number"<<endl;
    cout<<"Press 3 to print number of natural numbers"<<endl;
    cin>>choice;
    switch (choice)
    {
        case 1:
            cout<<"Enter first number"<<endl;
            cin>>a;
            cout<<"Enter second number"<<endl;
            cin>>b;
            cout<<"Sum of entered numbers is "<<a+b<<endl;
            break;
        case 2:
            cout<<"Enter the number"<<endl;
            cin>>a;
            cout<<"Square of entered numbers is "<<a*a<<endl;
            break;
        case 3:
            cout<<"Enter how many natural number you want to be printed "<<endl;
            cin>>i;
            for(t=1;t<=i;t++)
                cout<<t<<endl;
            break;
        default:
            cout<<"Please check your choice correctly and try again"<<endl;
            break;
    }
return 0;
}