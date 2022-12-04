#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age to check your youth status "<<endl;
    cin>>age;
    cout<<"Your entered age is "<<age<<endl;
    if(age>60)
        cout<<"You are senior citizen ";
    else if (age<60,age>30)
    {
        cout<<"You are middle aged";
    }
    else if (age<=0)
    {
        cout<<"Your age can not be negative or zero, please type correcly"<<endl;
    }
    
    else
    cout<<"You are very young";

return 0;
    
}