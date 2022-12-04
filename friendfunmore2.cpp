#include <iostream>
using namespace std;
class CL2; //forward declaration
class CL1
{
    int val1;
    friend void exchange(CL1 &, CL2 &);

public:
    void indata(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
};
class CL2
{
    int val2;
    friend void exchange(CL1 &, CL2 &);

public:
    void indata(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};
void exchange(CL1 &x, CL2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}
int main()
{
    CL1 o1;
    CL2 o2;

    o1.indata(30);
    o2.indata(60);
    exchange(o1, o2);

    cout << "The value of object after exchanging  ";
    o1.display();
    cout << "The value of object after exchanging  ";
    o2.display();
    return 0;
}
