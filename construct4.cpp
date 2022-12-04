#include <iostream>
#include <cmath>
using namespace std;
class point
{
    float x, y;
    friend float finddistance(point o1, point o2);
public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "Point is (" << x << " and " << y <<")"<< endl;
    }
};
float finddistance(point o1, point o2)
{
    float ans =  sqrt(pow((o2.x-o1.x),2)+pow((o2.y-o1.y),2));
    return ans;

}
int main()
{
    point p(1,1);
    point q(4,6);
    p.display();
    q.display();
    cout<<"Distance btn two points is "<<finddistance(p,q)<<endl;
    return 0;
}