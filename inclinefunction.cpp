#include<iostream>
using namespace std;
int product(int a,int b);
int main()
{
    int a,b;
    cout<<"Enter two values "<<endl;
    cin>>a>>b;
    cout<<"Product of entered values is "<<product(a,b)<<endl;
}
inline int product(int a, int b) //Replaces function call into function code realtime
{
    return a*b; //not recommended for while using recurrsion or static variable (program functionwithstaticvalue.cpp)
}