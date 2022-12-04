#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    FILE *pp;
    pp=fopen("fscanf.txt","r");
    fscanf(pp,"%d,%,d,%,d,%d,%d",&a,&b,&c,&d,&e);
    printf("a=%d b=%d c=%d d=%d e=%d",a,b,c,d,e);
    fclose(pp);
    return 0;
}