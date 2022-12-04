#include<iostream>
using namespace std;
class base
{
    int a;
    public:
        base & setvalue(int a)
        {
            this->a=a;  //this operator pointing to local value, if not ussed compiler will use garbage value and will not give desired output
            return *this; //another use of this operator to return object
        }
        void display()
        {
            cout<<"value of a is "<<a<<endl;
        }
};
int main()
{
    base obj;
    obj.setvalue(23).display(); //As setvalue function is returning object we can directly use another function in chain
    obj.display();
    return 0;
}