#include<stdio.h>
#include<string.h>
int main()
{
    FILE *pp;
    char str[100];
    int i;
    pp=fopen("writinginfile.txt","a");
    printf("Enter the information you want to be saved");
    gets(str);
    fputs(str,pp);
    fclose(pp);
    return 0;
}