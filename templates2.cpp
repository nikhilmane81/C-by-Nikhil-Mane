//Default parameter in templates
#include<iostream>
using namespace std;
template < class T1=int, class T2=float, class T3=double > //Here we are declaring default data type for template
class base
{
    public:
        T1 a;
        T2 b;
        T3 c;
    base(T1 m, T2 n , T3 r){a=m; b=n; c=r;};
    void display()
    {
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
        cout<<"value of c is "<<c<<endl;
    }
};
int main()
{
    base<>obj(23,45.6,45.45); //<> default template call without specification, template will use default declaration
    obj.display();
    base <int,int,int>obj2(2,4,5); //if we define template data type it shall override default parameters
    obj2.display();

    return 0;
}