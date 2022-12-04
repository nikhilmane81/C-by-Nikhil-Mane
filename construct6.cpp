#include<iostream>
using namespace std;
class simp{
    int data1;
    int data2;
    public:
        simp(int a, int b=9) //b=9 is declared here as default value
        {
            data1=a;
            data2=b;
        }
    void printdata(void)
    {
        cout<<"Data1 is "<<data1<<" and data2 is "<< data2<< endl;
    }
};
int main()
{
    simp iamobject(2); //here as we have only provided one parameter other will be taken from default
    //sim iamobject(2,4); will take the input values
    iamobject.printdata();
    return 0;
}