#include<iostream>
using namespace std;
class Employee
{
private:
    int a,b,c;
public:
    int d,e;
    void setdata(int a,int b, int c); //function declaration
    void getdata() // function defination
    {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};

void Employee::setdata(int a1, int b1, int c1) //function defination for setdata
{
    a=a1;b=b1;c=c1;
}
int main()
{
    Employee Nikhil;
    //Nikhil.a or Nikhil.b or c will not work as they belong to private class
    //d and e can be defined as follows as they belong to public class
    Nikhil.d=34;
    Nikhil.e=45;
    Nikhil.setdata(23,45,56);
    Nikhil.getdata();
    return 0;
}

