#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class simplecalc
{
protected:
    int a, b, c;

public:
    int addition(void)
    {
        cout << "Enter two numbers " << endl;
        cin >> a >> b;
        c = a + b;
        return c;
    }
    int subtraction(void)
    {
        cout << "Enter two numbers " << endl;
        cin >> a >> b;
        c = a - b;
        return c;
    }
    int multiplication(void)
    {
        cout << "Enter two numbers " << endl;
        cin >> a >> b;
        c = a * b;
        return c;
    }
    int division(void)
    {
        cout << "Enter two numbers " << endl;
        cin >> a >> b;
        c = a / b;
        return c;
    }
};
class scientific
{
protected:
    int a, b, h;

public:
    int square()
    {
        cout << "Enter number to find sqaure" << endl;
        cin >> a;
        h = pow(a, 2);
        return h;
    }
    int cube()
    {
        cout << "Enter number to find the cube of same" << endl;
        cin >> b;
        h = pow(b, 3);
        return h;
    }
};
class hybrid : public simplecalc, public scientific
{
public:
    void display1(void)
    {
        cout << "Value of calculation is " << c << endl;
    }
    void display2(void)
    {
        cout << "value of calculatrion is " << h << endl;
    }
};
int main()
{
    int choice, m;
    hybrid D;
    cout << "To add two numbers press 1" << endl;
    cout << "To subtract two numbers press 2" << endl;
    cout << "To multiply two numbers press 3" << endl;
    cout << "To divide two numbers press 4" << endl;
    cout << "To find sqaure of number press 5" << endl;
    cout << "To find cube of number press 6" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        m = D.addition();
        cout << "Answer is " << m << endl;
        D.display1(); // repeated but wanted use all classes
        break;
    case 2:
        m = D.subtraction();
        cout << "Answer is " << m;
        D.display1();
        break;
    case 3:
        m = D.multiplication();
        cout << "Answer is " << m;
        D.display1();
        break;
    case 4:
        m = D.division();
        cout << "Answer is " << m;
        D.display1();
        break;
    case 5:
        m = D.square();
        cout << "Answer is " << m;
        D.display2();
        break;
    case 6:
        m = D.cube();
        cout << "Answer is " << m;
        D.display2();
        break;
    default:
        cout << "Incorrect choice" << endl;
        break;
    }
    return 0;
}