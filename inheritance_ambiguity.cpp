#include<iostream>
using namespace std;
class base1{
    public:
        void greet(void)
        {
            cout<<"Good morning";
        }
};
class base2{
    public:
        void greet(void)
        {
            cout<<"Good evening";
        }
};
class dervied : public base1, public base2
{
    public:
        int a;
        void greet()      //if you define this function here, then ambiguity will be overwritten, and solved automatically
        {
            base2::greet(); //derived class is derived from base1 & base2,
        }                   //To avoid ambiguity error as compiler will not know which function you are asking for while inheriting
};                          // Thus you can define inheritance specific to class it is derived from, class name :: function ()
int main()
{
    dervied D;
    D.greet();
    return 0;
}