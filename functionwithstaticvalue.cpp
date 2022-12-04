#include<iostream>
using namespace std;
int product(int a,int b);
int main()
{
    int a,b;
    cout<<"Enter two values "<<endl;
    cin>>a>>b;
    cout<<"Product of entered values is "<<product(a,b)<<endl;
    cout<<"Product of entered values is "<<product(a,b)<<endl;
    cout<<"Product of entered values is "<<product(a,b)<<endl;
    cout<<"Product of entered values is "<<product(a,b)<<endl;
    cout<<"Product of entered values is "<<product(a,b)<<endl;
}
int product(int a, int b) //Not recommended to use inline function with static
{
    static int c; //on first call of function static variable is zero
    c=c+1;   //later calls c value is changed and function call do not run static line again
    return a*b+c; //C will get incremented by 1 as justified everytime function get called
}