//function overloading exmaple
#include<iostream>
using namespace std;
int sum(float a, int b){
    cout<<"using function with two argument"<<endl;
    return a+b;
}
int sum (int a, int b, int c){
    cout<<"using function with three argument"<<endl;
    return a+b+c;
}
int volume(int a)
{
    return(a*a*a);
}
int volume(int l,int h, int b)
{
    return(l*h*b);
}
int main()
{
    cout<<"Sum of 2 and 4 is "<<sum(2,4)<<endl; //float values are converted to int as per requirement, also wise versa is possible
    cout<<"sum of 2, 4, and 6"<<sum(2,4,6)<<endl; //Compiler auto decided which function suitable for operation
    cout<<"volume of cube with radius 4 "<<volume(4)<<endl;
    cout<<"volume of cuboid with l,h,b (4,6,7) "<<volume(4,6,7)<<endl;
    return 0;
}