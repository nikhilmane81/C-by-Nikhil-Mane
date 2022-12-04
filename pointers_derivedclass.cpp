//example of run time polumorphism
#include<iostream>
using namespace std;
class base
{
    public:
        int base1;
        void display(){cout<<"Displaying base class variable "<<base1<<endl;}
};
class derived : public base
{
    public:
        int derived1;
        void display(){cout<<"Displaying dervied class variable "<<derived1<<endl<<"displaying base class variable "<<base1<<endl;}
};
int main()
{
    base *basekapointer; //base class pointer
    base baseobj; //base class object
    derived derivedobj1; //dervied class object
    basekapointer = &derivedobj1; //base class pointer pointing dervied class object 
    basekapointer->base1=20;
    basekapointer->display();
    //basekapointer->derived1=34; Error as base class pointer belong to base class, late binding
    derived * derviedkapointer; //making derived class pointer
    derviedkapointer = &derivedobj1; //dervied class pointer pointing derived class object
    derviedkapointer->base1=10; //pointer of derived class invoking value of base class, vice versa not possible
    derviedkapointer->derived1=25; //pointer of derived class invoking values for derived class, straight forward logic
    derviedkapointer->display();
return 0;
}