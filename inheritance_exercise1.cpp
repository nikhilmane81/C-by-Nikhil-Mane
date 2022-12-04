#include <iostream>
#include <cmath>
using namespace std;

class simple_calculator
{
protected:
    int a;
    int b;
    int c;

public:
    void set_data1(int e, int d)
    {
        a = e;
        b = d;
    }
    int addition(void)
    {

        c = a + b;
        return c;
    }

    int subtraction(void)
    {

        if (a > b)
        {
            c = a - b;
        }
        else
        {
            c = b - a;
        }
        return c;
    }

    int multiplication(void)
    {

        c = a * b;
        return c;
    }

    int division(void)
    {

        c = a / b;

        return c;
    }
};

class scientific_calculator
{
protected:
    int f;
    int g;
    int h;

public:
    void set_data2(int e, int d)
    {
        f = e;
        g = d;
    }
    int exponent()
    {
        h = pow(f, g);
        return h;
    }
    int square_f()
    {
        h = pow(f, 2);
        return h;
    }
    int square_g()
    {
        h = pow(g, 2);
        return h;
    }
    int cube_f()
    {
        h = pow(f, 3);
        return h;
    }
};

typedef class hybrid_calculator : public simple_calculator, public scientific_calculator
{

public:
    void display_result(void)
    {
        cout << "The result of the following operation is " << c << endl;
    }
    void display_result2(void)
    {
        cout << "The result of the following operation is " << h << endl;
    }

} hybrid;
int main()
{

    hybrid h1;
    h1.set_data1(3, 4);
    h1.addition();
    h1.display_result();
    h1.set_data2(4, 5);
    h1.exponent();
    h1.display_result2();

    return 0;
}