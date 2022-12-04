#include<stdio.h>
#define SUM(a,b) a+b
#define PI 3.14
int main()
{
    float t;
    int r;
    float a;
    printf("Enter radius of circle >");
    scanf("%d",&r);
    t=PI*r*r;
    printf("Area of circle is %f and dia is %d",t, SUM(r,r));
    return 0;
}