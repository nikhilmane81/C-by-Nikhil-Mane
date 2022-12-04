// Program to check if entred number is not binary using classes and object
#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string s;
    void checkbinary(void);

public:
    void read(void);
    void onescompliment(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "Enter binary number" << endl;
    cin >> s;
}
void binary ::checkbinary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format" << endl;
        exit(0);
        }
    }
}
void binary ::onescompliment(void)
{
    checkbinary();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout <<"Displaying your binary number "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}
int main()
{
    binary b;
    b.read();
    //b.checkbinary();
    b.display();
    b.onescompliment();
    b.display();
    return 0;
}