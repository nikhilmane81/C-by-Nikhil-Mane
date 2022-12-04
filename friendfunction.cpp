// use of friend function, program to add two complex number
#include<iostream>
using namespace std;
// 1 + 4i
// 5 + 8i
// -------
// 6 + 12i
class complex{
    int a, b;
    friend complex sumcomplex(complex o1, complex o2); //Friend function is used to give access 
    //for class variablesto post defined function 
public:
    void setnumber(int m, int n)
    {
        a=m;
        b=n;
    }
    void printnumber(void){
        cout<<"Your complex number is "<<a<<" + "<<b<<" i "<<endl;
    }
};
complex sumcomplex(complex o1,complex o2){
    complex o3;
    o3.setnumber((o1.a+o2.a), (o1.b+o2.b));
    return o3;
}
int main()
{
    complex c1,c2,sum;
    c1.setnumber(1,4);
    c1.printnumber();

    c2.setnumber(5,8);
    c2.printnumber();

    sum=sumcomplex(c1,c2);
    sum.printnumber();
    return 0;
}