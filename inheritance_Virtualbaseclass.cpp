#include<iostream>
using namespace std;
class base1
{
    protected:
        int bb;
    public:
        void setvalue(int x)
        {
            bb=x;
        }
        void display(void)
        {
            cout<<"value is "<<bb<<endl;
        }
};
class derived1 : virtual public base1 //derived from virtual class
{

};
class derived2 : virtual public base1
{

};
class hybrid : public derived1, public derived2
{
    
};
int main()
{
    hybrid object;
    object.setvalue(23);
    object.display();
    return 0;
}