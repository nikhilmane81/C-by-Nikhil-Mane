#include<iostream>
using namespace std;
void func(int a)
{
    cout<<"I am normal func being called "<<a<<endl;
}
template <class T>
void func(T a)
{
    cout<<"I am template func being called "<<a<<endl;
}
int main()
{
    func(3);// Exam match will take the priority
    func(3.4); //as we used float number, it has used template function
    return 0;
}