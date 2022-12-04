//example of inheritance of struct similar to class
//member function are public by default and they will remain public when inherited
//In this program we will make them private by using dedicated keyword
#include<iostream>
using namespace std;
struct base
{
    private:
    int x;
    public:
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
        cout<<"value of x is ";
    }
};
int main()
{
    struct derived obj;
    int value = obj.setvalue(10);
    obj.display();
    cout<<value<<endl;
    return 0;
}