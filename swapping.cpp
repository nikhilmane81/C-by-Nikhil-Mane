#include<iostream>
using namespace std;
void swap(int* a,int* b);
int main(){
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    swap(&num1,&num2);
    cout<<"Numbers are now swapped and are "<<num1<<endl<<num2<<endl;
    return 0;
}
void swap(int* a, int* b)
{
    int temp =*a;
    *a= *b;
    *b = temp;
}