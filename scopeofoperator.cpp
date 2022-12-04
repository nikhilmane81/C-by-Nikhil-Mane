#include<iostream>
using namespace std;
int c=50;
int main()
{
    int a;
    int b;
    int c;
    cout<<"Enter first number "<<endl;
    cin>>a;
    cout<<"Enter second number "<<endl;
    cin>>b;
    c = a+b;
    cout<<"addition of two numbers "<<c;
    cout<<"value of global c"<<::c;
    return 0 ;

}