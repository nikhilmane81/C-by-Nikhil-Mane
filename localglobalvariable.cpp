#include<iostream>
using namespace std;
int glo=6;
void sum()
{
    cout<<glo;
}
int main()
{
    int glo=9;
    glo=45;
    cout<<glo;
    bool is_true = true;
    cout<<is_true;
    sum();  //will use global variable as main function's glo has scope within main only
    return 0;
}