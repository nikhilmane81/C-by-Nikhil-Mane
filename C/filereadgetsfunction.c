#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    FILE *pp;
    pp=fopen("filewritetest.txt","r");
    if (pp==NULL)
    {
        printf("file not found");
    }
    while(fgets(str,9,pp)!=NULL)
    {
        printf("%s",pp);
    }
    fclose(pp);
    return 0;
}