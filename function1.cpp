#include<iostream>
using namespace std;
int sum(int a, int b); //function declaration, also called as function prototype
//int sum(int,int) => is also acceptable
void g(void); // void g() is also acceptable
int main(){
    int num1,num2;
    cout<<"Enter first number "<<endl;
    cin>>num1;
    cout<<"Enter second number "<<endl;
    cin>>num2;
    cout<<"Addition of two number is "<<sum(num1,num2);
    g();
    return 0;
}
int sum(int a,int b) //function defination
{
    int c=a+b;
    return c;
}
void g()
{
    cout<<"\nSuccessfully called the g() function ";
}