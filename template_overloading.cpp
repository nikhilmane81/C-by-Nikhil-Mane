#include<iostream>
using namespace std;
template <class T>
class base
{
    public:
        T data;
        base(T set)
        {
            data = set;
        }
        void display();
};
template <class T> //template syntax when defining function outside the class
void base<T> ::display()
{
    cout<<data<<endl;
}
int main()
{
    base <int> obj(34); //<> defining data type
    obj.display();
    base <float> obj2(23.3);
    obj2.display();
    return 0;
}