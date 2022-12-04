#include<iostream>
using namespace std;
class shop
{
    int itemid;
    float itemprice;
    public:
        void setdata(int m, float n)
        {
            itemid=m;
            itemprice=n;
        }
        void showdata(void)
        {
            cout<<"Item id is "<<itemid<<endl
            <<"item price is "<<itemprice<<endl;
        }
};
int main()
{
    int size = 2;
    shop *ptr = new shop[size];
    shop *ptrnew = ptr;
    int p, i;
    float q;
    for ( i = 0; i < size; i++)
    {
        cout<<"Enter item id and then enter item price for item number"<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for ( i = 0; i < size; i++)
    {
        cout<<"item number "<<i+1<<endl;
        ptrnew->showdata();
        ptrnew++;
    }
}