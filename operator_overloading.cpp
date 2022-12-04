#include <iostream>
using namespace std;
class complex
{
    int real, img;

public:
complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    // This is automatically called when '+' is used with
    // between two Complex objects
    complex operator+(complex const &obj)
    {
        complex res;
        res.real = real + obj.real;
        res.img = img + obj.img;
        return res;
    }
    void display()
    {
        cout << real << " + i" << img << endl;
    }
};
int main()
{
    complex c1(10, 5), c2(23, 45);
    complex c3 = c1 + c2; // operator + example
    c3.display();
    return 0;
}