#include<iostream>
using namespace std;
template <class T1, class T2> //template declaration
class base // creating generalized calls, as type of datatype will be defined while creating objects depending on requirement
{
    public:
        T1 data1; //T1 here can be defined later ex <int> <float> etc
        T2 data2; // same as above
        base(T1 a, T2 b) 
        {
            data1=a;
            data2=b;
        }
        void display()
        {
            cout<<this->data1<<endl<<this->data2<<endl;
        }
};
int main()
{
    base <int, int> obj(2,6); //here we are defining which data type we want to use using template
    base <char, float> obj2('c',2.3);
    obj.display();
    obj2.display();
    return 0;
}