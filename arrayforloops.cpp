#include<iostream>
using namespace std;
int main()
{
    int i;
    int a=0;
    int b=0;
    int m[]={23,45,56,34};
    for(i=0;i<4;i++)
    {
        cout<<m[i]<<endl;
    }
//trying same with while loop
cout<<"Using while lopp "<<endl;
    while(a<4)
    { 
        cout<<m[a]<<endl;
        a++;
    }
//same with do while loop
cout<<"Same with do while lopp"<<endl;
do
{
    cout<<m[b]<<endl;
    b++;
} while (b<4);

return 0;
}