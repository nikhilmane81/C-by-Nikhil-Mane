#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class human
{
int id;
char name[100];
public:
    void setidname(int, char[]);
    void display();
};
void human::setidname(int id, char n[])
{
    this->id = id;
    strcpy(this->name,n);
}
void human::display()
{
    cout<<id<<" "<<name;
}
class student:private human
{
int fees;
char subject[200];
public:
    void setinfo(int id, char n[], int f, char s[])
    {
        setidname(id,n);
        strcpy(this->subject, s);
        this->fees = f;
    }
    void display_s();
};
void student::display_s()
{
    display();
    cout<<" "<<subject<<" "<<fees;
}
int main()
{
    student obj;
    obj.setinfo(100,"sohail",3000,"chemistry");
    obj.display_s();
    return 0;
}