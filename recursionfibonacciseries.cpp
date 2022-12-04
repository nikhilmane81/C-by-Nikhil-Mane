#include<iostream>
using namespace std ;
int fibo(int i)
{
    if(i<2)
    {
        return 1;
    }
    return fibo(i-2) + fibo(i-1);
}
int main(){
    int a;
    cout<<"Fibonacci sequence at number entered "<<endl;
    cin>>a;
    cout<<"values are "<<fibo(a)<<endl;
    int m=0;
    for(m=0;m<=10;m++)
    {
        cout<<endl<<fibo(m);
    }
    return 0;
    }