#include<iostream>
#include<cmath>
#define PI 3.1415
using namespace std;
class simplecalc
{
    protected:
        float input;
        float a,b;
    public:
        int userinput(int choice)
        {
            cout<<"To add two numbers press 1"<<endl;
            cout<<"To subtract two numbers press 2"<<endl;
            cout<<"To multiply two numbers press 3"<<endl;
            cout<<"To divide two numbers press 4"<<endl;
            cin>>choice;
            switch (choice)
            {
            case 1:
                cout<<"Enter two numbers "<<endl;
                cin>>a>>b;
                cout<<"Sum of two numbers is "<<a+b<<endl;
                break;
            case 2:
                cout<<"Enter two numbers "<<endl;
                cin>>a>>b;
                cout<<"Subtraction of two numbers is "<<a-b<<endl;
                break;
            case 3:
                cout<<"Enter two numbers "<<endl;
                cin>>a>>b;
                cout<<"Multiplication of two numbers is "<<a*b<<endl;
                break;
            case 4:
                cout<<"Enter two numbers "<<endl;
                cin>>a>>b;
                cout<<"Division of two numbers is "<<a/b<<endl;
                break;
            default:
                cout<<"Incorrect input, try again";
                break;
            }
        }
    
};
class scientificcalc
{
    public:
    int input2;
    float a;
    int userinput2(int choice2)
    {
    cout<<"Press 1 to find the squre of entered number "<< endl;
    cout<<"press 2 to find squareroot of the entered number"<<endl;
    cin>>choice2;
    switch(choice2)
    {
        case 1:
            cout<<"Enter a number";
            cin>>a;
            cout<<"Sqaure of entered number is"<<a*a<<endl;
        case 2:
            cout<<"Enter a number";
            cin>>a;
            cout<<"Sqareroo of the entered number is "<<sqrtf(a)<<endl;
    }
    }
};
class call:public simplecalc,public scientificcalc
{
    public:
    int input3;
    int selection(int input3)
    {
        cout<<"Press 1 for simple calculator or press 2 for scientific calculator"<<endl;
        cin>>input3;
        if(input3==1)
        {
            userinput();
        }
        else:
            userinput2();

    } 
};
int main()
{
    call test;
    test.selection();
    return 0;
}
