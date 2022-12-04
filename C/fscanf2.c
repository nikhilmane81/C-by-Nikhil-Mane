#include<stdio.h>
int main()
{
    int s[20];
    FILE *pp;
    pp=fopen("fscanf.txt","r");
    fscanf(pp,"%s",&s);
    printf("%s",s);
    fclose(pp);
    return 0;
}