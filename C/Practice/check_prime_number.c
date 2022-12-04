#include<stdio.h>
int main()
{
    int num,i;
    int prime=1;
    printf("Enter number to check if it is prime number ");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        if(num%i==0)
            prime=0;
        if(prime==0)
    {
        printf("Entered number (%d) is not prime number ", num);
    }
    break;
    }
    if(prime!=0)
    printf("Entered number (%d) is prime number ", num);
    
}
/*

<<<<<< Alternative method >>>>
#include<stdio.h>
int main()
{
    int num,i;
    int prime=1;
    printf("Enter number to check if it is prime number ");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        if(num%i==0)
            prime=0;
    }
    if(prime==0)
    {
        printf("Entered number %d is not prime number ", num);
    }
    else
    printf("Entered number %d is prime number ", num);
    
}

*/