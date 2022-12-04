#include<iostream>
using namespace std;
class point
{
    int x,y;
public:
    // Parameterized Constructor
    point(int x1, int x2)
    {
        x=x1;
        y=x2;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
};
int main()
{
        // Constructor called
    point p1(10,12);
        // Access values assigned by constructor
    cout<<"p1.x "<<p1.getX()<<endl<<"p1.y "<<p1.getY()<<endl;
    return 1;
}

