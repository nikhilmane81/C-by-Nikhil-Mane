//final class is the class which can be derived further
//it is created using keyword "final"
//below base class is final class and can not be inherited
#include<iostream>
using namespace std;
class base final
{

};
class derived : public base
{

};
int main()
{
    return 0;
}