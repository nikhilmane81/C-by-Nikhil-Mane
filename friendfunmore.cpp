#include<iostream>
using namespace std;
class Y; //Forward declaration of class needed here
class X
{
    int num1;
    public:
        void set1(int a){
            num1=a;
        }
    friend void add(X,Y); //friend declaration to allow access
};
class Y
{
    int num2;
    public:
        void set2(int b)
        {
            num2=b;
        }
    friend void add(X, Y); //friend declaration to allow access
};
void add(X m, Y n)
{
    cout<<"Sum of values is "<<(m.num1+n.num2);
}
int main()
{
    X a1;
    a1.set1(4);
    Y b1;
    b1.set2(5);
    add(a1,b1);
    return 0 ;
}