#include<iostream>
using namespace std;
class base1
{
    int real;
    int imaginary;
    public:
        void setdata(int m, int n)
        {
            real = m;
            imaginary = n;
        }
        void display()
        {
            cout<<"real value is "<<real<<endl
            <<"imaginary value is "<<imaginary<<endl;
        }
};
int main()
{
    //base1 object;
    //base1 *ptr = &object;
    //using new operator
    base1 *ptr = new base1;
    // arrow operator ->, pointer pointing object
    ptr->setdata(12,34);
    (*ptr).display(); //usual method

    //array of object
    base1 *ptr2= new base1[4];
    ptr->setdata(2,4);
    ptr->display();
    return 0;
}