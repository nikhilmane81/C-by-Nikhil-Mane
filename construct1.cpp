#include<iostream>
using namespace std;
class construct
{
    public:
    int a, b;
    // default constructor;
    construct()
    {
        a=10;
        b=15;
    }
};
int main()
{
    construct c;
    cout<<" a is "<<c.a<<endl;
    cout<<" b is "<<c.b<<endl;
    return 1;
}