#include <iostream>
using namespace std;
class complex; // forward declartion, to let compiler know there are other classes exist in code
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRC(complex, complex); //function declaratio
    int sumCC(complex,complex);
};
class complex
{
    int a, b;
    //friend int calculator ::sumRC(complex, complex); //as sumRC defination require accessing values of class named complex,
    //friend function is used to allow access for the same
    //friend int calculator::sumCC(complex , complex ); //individually declaring function as friend
    //alternative method, we can declare complete class as friend
    friend class calculator;
public:
    void setnumber(int m, int n)
    {
        a = m;
        b = n;
    }
    void printnum()
    {
        cout << "Your number is " << a << " + " << b << endl;
    }
};
int calculator::sumRC(complex q, complex r) //defining sumRC function which is declared in class calculator
{
    return (q.a + r.a);
}
int calculator::sumCC(complex q, complex r) 
{
    return (q.b + r.b);
}
int main()
{
    complex m, n;
    m.setnumber(1, 4);
    n.setnumber(5, 7);
    calculator calc;
    int res = calc.sumRC(m, n);
    cout << res << endl;
    int res2 = calc.sumCC(m,n);
    cout << res2 << endl;
}