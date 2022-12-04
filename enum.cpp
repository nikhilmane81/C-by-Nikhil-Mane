#include<iostream>
using namespace std;
typedef enum currency {INR, AED, USD}en; //allocating numbers to data, like INR is 0, AED is 1 etc
int main()
{
    en m1=INR;
    en m2=AED;
    en m3=USD;
    en m4=AED;
    cout<<m1<<endl; //printing to verify correct number system is assigned
    cout<<m2<<endl;
    cout<<m3<<endl;
    cout<<m4<<endl;
    return 0;
}
