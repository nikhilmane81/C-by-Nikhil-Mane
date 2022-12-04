#include<iostream>
using namespace std;
void swapptr(int *a, int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main()
{
    int m=5, n=10;
    cout<<"Original values are "<<m<<"and"<<n<<endl;
    swapptr(&m,&n);co
    cout<<"swapped values are "<<m<<"and"<<n<<endl;
    return 0;
}