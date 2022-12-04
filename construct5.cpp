#include <iostream> //Program for constructor overloading
using namespace std;
class construct
{
private:
    int a, b;

public:
    construct(int x, int y)
    {
        a = x;
        b = y;
    }
    construct(int x) //complex overloading
    {
        a=x;
        b=0;
    }
    construct() //You can call it default contructor
    {
        a=0;
        b=0;
    }

    void display(void)
    {
        cout << "Your number is " << a << " + " << b << " i " << endl;
    }
};
int main()
{
    construct a(4, 6);
    a.display();
    construct b(5);
    b.display();
    construct c;
    c.display();
    return 0;
}
