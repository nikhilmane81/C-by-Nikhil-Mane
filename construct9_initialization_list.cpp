#include <iostream>
using namespace std;
class test
{
public:
    int a;
    int b;
    // test(int i, int j): a(i), b(j)
    // test(int i, int j) : a(i), b(a + j)
    // test(int i, int j) : a(i), b(i + j)
    // test(int i, int j) : a(i), b(2 * j)
    //test(int i, int j) : b(i), a(j)
    test(int i, int j) : b(j), a(i+b)
    //test(int i, int j) : b(i), a(j)
    {
        cout << "values of a is " << a << endl;
        cout << "values of b is " << b << endl;
    }
};
int main()
{
    test object(4, 8);
    return 0;
}
