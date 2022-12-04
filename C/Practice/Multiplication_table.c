#include<stdio.h>
int main()
{
    int a;
    printf("Enter number to generate multiplication table of the same ");
    scanf("%d",&a);
    for (int i = 1; i < 11; i++)
    {
        printf("%d\n",a*i);
    }
    return 0; 
}