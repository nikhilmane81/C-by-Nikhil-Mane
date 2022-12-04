#include <stdio.h>
int main()
{
    int num;
    int sum;
    printf("Enter how many natural number you want to sum ");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        sum= (i*i+i)/2; //using sum of n natural number formula
    }
    printf("%d", sum);
    return 0;
}