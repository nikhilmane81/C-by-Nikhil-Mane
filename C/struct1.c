#include<stdio.h>
struct date
{
    int d,m,y;
};
int main()
{
    struct date today,d1; //mandate to use struct keywork before defining variable for defined struct
    today.d=25; //to specify variable and which struct it belong to
    today.m=4;
    today.y=2022;
    d1=today; //You can assign struct variable directly
    printf("Enter the date separated by /\n");
    scanf("%d/%d/%d",&d1.d,&d1.m,&d1.y);
    printf("User entered date is %d/%d/%d",d1.d,d1.m,d1.y);
    return 0;
}   