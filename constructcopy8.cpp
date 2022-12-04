#include <iostream>
using namespace std;
class Number
{
    int a;
    public:
        Number(){
            a = 0;
        }

        Number(int num){
            a = num;
        }
        // When no copy constructor is found, compiler supplies its own copy constructor
        Number(Number &obj){
            cout<<"Copy constructor called!!!"<<endl;
            a = obj.a;
        }
    void display(void)
    {
        cout << "Number to be displayed is " << a << endl;
    }
};
int main()
{
    Number x(12), y, z(20),z2;
    x.display();
    y.display();
    z.display();
    Number z1(x);//copy constructor invoked
    z1.display();
    z2 = z; //copy constructor will not invoked
    Number z3=z; 
    z3.display(); //copy constructor invoked
    return 0;
}