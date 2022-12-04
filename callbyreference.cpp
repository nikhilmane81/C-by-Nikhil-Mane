#include<iostream>
using namespace std;
void swapref(int &a, int &b)
{
   int  temp= a;
   a=b;
   b=temp;
}
int main()
{
   int x=6,y=9;
   cout<<"Value of x and y are "<<x<<"\t"<<y<<endl; 
   swapref(x,y);
   cout<<"Value of x and y are now after swapping "<<x<<"\t"<<y<<endl;
   return 0;
}