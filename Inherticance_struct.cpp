//example of inheritance of struct similar to class
//member function are public by default and they will remain public when inherited

#include<iostream>
using namespace std;
struct base
{
    int x;
    int setvalue(int a); //function declaration
};
int base ::setvalue(int a) //defining function outside struct
{
   x = a;
   return x;
}
struct derived : base
{
    int y;
    void display(void)
    {
        cout<<"value of x is "<<x<<endl;
    }
};
int main()
{
    struct derived obj;
    obj.setvalue(10);
    obj.display();
    return 0;
}