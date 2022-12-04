#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s[100];
    FILE *st;
    st=fopen("filewritetest.txt","w");
    if(st==NULL)
    printf("Can not open file");
    printf("Enter the string you want to be added in file");
    gets(s);
    for(i=0;i<strlen(s);i++)
    fputc(s[i],st);
    fclose(st);
    return 0;
}