#include<stdio.h>
int main()
{
    int a,b;
    FILE *pp;
    pp=fopen("fprintfest.txt","w");
    printf("Enter two number here\n");
    scanf("%d%d",&a,&b);
    fprintf(pp,"Sunm of %d and %d is %d",a,b,a+b);
    fclose(pp);
    return 0;
}