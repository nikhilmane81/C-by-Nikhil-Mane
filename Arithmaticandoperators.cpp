#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int b=6;

    cout<<"Following are but not limited to arithmatic operators in c++ "<<endl;
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;
    cout<<"following are comparison operator";
    cout<<"a>b "<<(a>b)<<endl;
    cout<<"a<b "<<(a<b)<<endl;
    cout<<"a==b "<<(a==b)<<endl;
    cout<<"a!=b "<<(a!=b)<<endl; //similarly <=, >= can be used as well
    //And OR operator example
    cout<<"((a<b)&&(a==b)) "<<((a<b)&&(a==b))<<endl; //and operator need both value to be true for true output
    cout<<"((a<b)||(a==b)) "<<((a<b)||(a==b))<<endl;  //OR operator need atleast one value true for true output
    cout<<"bitwise operaror result (a<b) "<<!(a<b)<<endl; //bitwise NOT operartor reverses the result


    return 0 ;
    }