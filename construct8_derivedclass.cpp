#include <iostream>
using namespace std;
class base1
{
private:
    int a;

public:
    base1(int m)
    {
        a = m;
        cout << "I am base1 constructor" << endl;
    }
    void showbase1(void)
    {
        cout << "Base1 value " << a << endl;
    }
};
class base2
{
private:
    int x;

public:
    base2(int m)
    {
        x = m;
        cout << "I am base2 constructor" << endl;
    }
    void showbase2(void)
    {
        cout << "Base2 value " << x << endl;
    }
};
class derived : public base1, public base2
{
private:
    int s, t;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        s = c;
        t = d;
        cout << "I am  derived class contructor " << endl;
    }
    void showder(void)
    {
        cout << "Derived value " << s << endl
             << t << endl;
    }
};
int main()
{
    derived D(5, 6, 8, 10);
    D.showbase1();
    D.showbase2();
    D.showder();
    return 0;
}