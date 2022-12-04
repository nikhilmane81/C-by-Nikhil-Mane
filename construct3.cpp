#include<iostream>
using namespace std;
class construct
{
private:
    int a, b;
public:
    construct(int, int);
    void display(void)
    {
        cout<<"Your number is "<<a<<" + "<<b<<" i "<<endl;
    }
};

construct::construct(int x, int y) //this is parameterised constructor
{
    a=x;
    b=y;
}
int main()
{
    construct a(4,6);
    a.display();
    return 0;
}
