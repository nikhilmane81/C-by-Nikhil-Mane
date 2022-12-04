#include<stdio.h>
int main()
{
    int a=4, b;
    b=a++;
    printf("Values are %d %d  ",a,b);
    b=++a;
    printf("Values are %d %d ",a,b);
    return 0;
}