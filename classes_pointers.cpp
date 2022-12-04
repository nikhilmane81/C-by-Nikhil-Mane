#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int *pointer = &a;
    cout << "value is " << a << endl;
    cout << "value is " << pointer << endl;
    cout << "value is " << *(pointer) << endl;
    //new operator
    int *pointer2 = new int(40); // dynamic declaration of pointer and memory allocation
    cout << "value is " << *(pointer2) << endl;
    int *arr = new int[3]; // dynamic memory allocation
    arr[0] = 20;
    arr[1] = 45; //*(arr+1)=45 will also work
    arr[2] = 60;
    //delete arr;
    delete[] arr;
    cout << "value is " << arr[0] << endl;
    cout << "value is " << arr[1] << endl;
    cout << "value is " << arr[2] << endl;
    //delete operator
    // code -->> delete arr or delete[] arr
    return 0;
}