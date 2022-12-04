#include<iostream>
using namespace std;
template <class T1, class T2>
float avgcalc(T1 a, T2 b) //data type will be auto detected later
{
    float avg = ((a+b)/2);
    return avg;
}
template <class T>
void swapp(T &a, T &b) //using template as data type will be declared later
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    float a;
    a = avgcalc(23.5, 56);
    cout<<a<<endl;

    int x=5, y=7;
    swapp(x,y);
    cout<<x<<endl<<y<<endl;

    return 0 ;
}