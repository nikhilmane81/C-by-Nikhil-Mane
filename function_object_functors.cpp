#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]= {1,3,4,6,9,99,34,56,2};
    sort(arr, arr+9); //sorting accending order
    sort(arr,arr+9,greater<int>()); //functor, also known as function object// sorting decending order
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
}