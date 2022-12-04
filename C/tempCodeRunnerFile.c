#include<stdio.h>
int main()
{
    register int x=5;
    x++;
    printf("%d\n",x);
    x--;
    printf("%d\n",x);
    ++x;
    printf("%d\n",x);
    --x;
    printf("%d",x);
    return 0;
}