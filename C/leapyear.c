#include<stdio.h>
int main()
{
    int year=2100;
    printf("Enter year to check if it is leap year ");
    scanf("%d", &year);
    //for(int i=0;i<25;i++)
    {
    if((year%4==0 && year%100!=0)|| year%400==0)
    {
        printf("%d is leap year \n", year);
    }
    else
    printf("%d is NOT leap year \n",year);
    //year++;
    }
    return 0;
}   