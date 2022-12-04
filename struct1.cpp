#include<iostream>
using namespace std;
struct emp
{
    int emid;
    char emcode;
    float salary;
};
int main()
{
    struct emp nikhil;
    nikhil.emid=123;
    nikhil.emcode='a';
    nikhil.salary=123000;
    cout<<"Value is "<<nikhil.emid<<endl;
    cout<<"Value is "<<nikhil.emcode<<endl;
    cout<<"Value is "<<nikhil.salary<<endl;
    return 0;
}
