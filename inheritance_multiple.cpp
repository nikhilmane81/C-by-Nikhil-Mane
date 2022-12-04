#include <iostream>
using namespace std;
class base1
{
protected:
    int base1int;

public:
    void setbase1int(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void setbase2int(int a)
    {
        base2int = a;
    }
};
class dervied : public base1, public base2
{
public:
    void showvalues(void)
    {
        cout << "value of base1 is " << base1int << endl
             << "value of base2 is " << base2int << endl
             << "Sum of values is " << base1int + base2int << endl;
    }
};
int main()
{
    dervied DD;
    DD.setbase1int(23);
    DD.setbase2int(20);
    DD.showvalues();
    return 1;
}
