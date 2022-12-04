#include <iostream>
using namespace std;
class student
{
protected:
    int rollnumber;

public:
    void setrollnumber(int);
    void getrollnumber(void);
};
void student::setrollnumber(int input)
{
    rollnumber = input;
}
void student::getrollnumber(void)
{
    cout << rollnumber << endl;
}

class exam : public student
{
protected:
    float physics;
    float maths;

public:
    void setmarks(float, float);
    void getmarks(void);
};

void exam::setmarks(float m, float n)
{
    maths = m;
    physics = n;
}
void exam::getmarks(void)
{
    cout << "Marks obtained in physics are " << physics <<endl<<"and for maths " << maths << endl;
}

class result : public exam
{
    float percentage;

public:
    void display(void);
};
void result::display(void)
{
    getrollnumber();
    getmarks();
    cout << "Your percentage is " << (maths + physics) / 2 << endl;
}
int main()
{
    result henry;
    henry.setrollnumber(400);
    henry.setmarks(95.20,78.65);
    henry.display();
    return 0;
}