#include<iostream>
using namespace std;
class base
{
    public:
        int base1=1;
        virtual void display(){cout<<"Displaying base class variable "<<base1<<endl;}
};
class derived : public base
{
    public:
        int derived1=2;
        void display(){cout<<"Displaying dervied class variable "<<derived1<<endl<<"displaying base class variable "<<base1<<endl;}
};
int main()
{
    base * basekapointer;
    base baseobj;
    derived derviedobj;
    basekapointer = &derviedobj;
    basekapointer->display();
    return 0;
}