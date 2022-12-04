#include<stdio.h>
int factorial(int n)
{
    if (n>=1)
    {
        return n*factorial(n-1);
    }
    else
    return 1;
    
}
int main ()
{
    int ans1;
    ans1 = factorial(5);
    printf("%d", ans1);
    
return 0;  
}