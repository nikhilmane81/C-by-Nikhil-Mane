#include<iostream>
using namespace std;
class bank{
    int principal;
    int years;
    float intrestrate;
    float returnvalue;
    public:
        bank(){};
        bank(int a, int b, float c);
        bank(int a, int b, int c);
        void show();
};
bank::bank(int a, int b, float c)
{
    principal = a;
    years = b;
    intrestrate = c;
    returnvalue=principal;
    for (int i = 0; i < b; i++)
    {
        returnvalue= returnvalue * (1+intrestrate);
    }  
}
bank::bank(int a, int b, int c)
{
    principal = a;
    years = b;
    intrestrate = float (c)/100;
    returnvalue=principal;
    for (int i = 0; i < b; i++)
    {
        returnvalue= returnvalue * (1+intrestrate);
    }  
}
void bank::show()
{
    cout<<"Principle value was "<<principal<<endl
    << "Return value after  "<< years 
    << " is "<< returnvalue<< endl;
}
int main()
{
    bank bd1, bd2, bd3;
    int p,y;
    float r;
    int R;

    cout<<"Enter the value of principal  and years of investment and return "<<endl;
    cin>>p>>y>>r;
    bd1= bank(p,y,r);
    bd1.show();
    cout<<"Enter the value of principal  and years of investment and return "<<endl;
    cin>>p>>y>>R;
    bd2= bank(p,y,R);
    bd2.show();
    return 0;

}