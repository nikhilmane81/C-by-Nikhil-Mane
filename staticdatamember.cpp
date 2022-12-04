#include <iostream>
using namespace std;
class employee
{
    int id;
    int static count; // declaration of satic count

public:
    void getdata(void)
    {
        cout << "Enter the id of employee " << endl;
        cin >> id;
        count++;
    }
    void display(void)
    {
        cout << "Id of employee is " << id << " of employee number " << count << endl;
    }
    static void getcount(void)
    {
        cout<<"The value of count is "<<count<<endl;
    }
};
int employee ::count; // global static variable
int main()
{
    employee Shizuka, naruto, dora;
    Shizuka.getdata();
    Shizuka.display();
    employee ::getcount();
    naruto.getdata();
    naruto.display();
    employee::getcount();
    dora.getdata();
    dora.display();
    employee::getcount();
    return 0;
}