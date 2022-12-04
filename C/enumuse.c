#include<stdio.h>
enum boolean
{
    false,true
};
enum boolean iseven(int x)
{
    if (x%2==0)
        return true;
    else
        return false;   
}
int main()
{
    int n;
    enum boolean result;
    printf("Enter number to check if odd or even >> ");
    scanf("%d",&n);
    result=iseven(n);
    result==true?printf("Even number"):printf("odd number");
    return 0;
}