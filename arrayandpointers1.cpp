#include<iostream>
using namespace std;
int main()
{
    int m[]={45,56,67,99};
    int* p=m;
    int i;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
//trying same using for loop
cout<<"Trying same with for loop"<<endl;
    for(i=0;i<4;i++)
    {
        cout<<*(p+i)<<endl;
    }
return 0;
}