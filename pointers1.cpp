#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int* b=&a;
    int**c=&b;
    cout<<"address of a is "<<&a<<endl;
    cout<<"address of a is "<<b<<endl;
    cout<<"address of b is "<<c<<endl;
    cout<<"value of a is "<<*b<<endl;
    cout<<"value of a is " <<**c<<endl;
    return 0;
}