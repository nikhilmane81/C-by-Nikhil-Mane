#include<iostream>
using namespace std;
int main()
{
    int a=34;
    float b=45.5;
    cout<<"size of 21 "<<sizeof(21)<<endl;
    cout<<"size of 21.2 "<<sizeof(21.2)<<endl;
    cout<<"size of 21.2 float "<<sizeof(21.2f)<<endl;
    cout<<"size of 21.2 long double "<<sizeof(21.2l)<<endl;
    cout<<"typecasting int into float "<<(float)a<<endl; // used to typecast int into float, (float) is added before variable
    cout<<"typecasting float into int "<<(int)b<<endl;
    cout<<"typecasting float into int "<<int(b)<<endl; //can be written like this as well
    cout<<"typecasting with arthmatic expression "<<int(a)+int(b)<<endl;
    cout<<"typecasting with arthmatic expression "<<float(a)+float(b)<<endl;
    return 0; 
}