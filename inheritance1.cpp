#include<iostream>
using namespace std;
class emp //base class
{
    public:
    int id;
    float salary;
    emp(){};
    emp(int input)
        {
            id=input;
            salary=340;
        }
};
class derivedemp : public emp //derived class
{
    public:
    derivedemp(int input)
    {
        id=input;
    }
    derivedemp(){};
};
int main()
{
    emp nik(1);
    cout<<nik.salary<<endl;
    derivedemp rick(9);
    cout<<rick.id<<endl;   
    return 0;

}