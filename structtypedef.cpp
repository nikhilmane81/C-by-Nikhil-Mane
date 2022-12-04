#include<iostream>
using namespace std;
typedef struct employee //tydef function is used to define struct in signle name, instead of using struct emp everytime we define variable
//under it
{
    int empid;
    char empcode;
    float empsalary;
}emp;
int main(){
    emp nikhil;
    nikhil.empcode='a';
    nikhil.empid=124;
    nikhil.empsalary=12343435;
    cout<<nikhil.empcode<<endl<<nikhil.empid<<endl<<nikhil.empsalary<<endl;
    return 0;
}
