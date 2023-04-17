#include <iostream>
using namespace std;
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "Constructor called " << count << endl;
    }
    ~num()
    {
        cout << "Destructor called " << count << endl;
        count--;
    }
};
int main()
{
    cout << "we are inside main function"<<endl;
    cout << "creating object 1" << endl;
    num n1;
    {
        cout << "entering this block" << endl;
        cout << "creating two more objects " << endl;
        num n2, n3;
        cout << "exiting this block" << endl;
    }
    return 0;
}
