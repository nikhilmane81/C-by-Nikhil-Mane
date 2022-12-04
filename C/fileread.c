#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i;
    char s;
    FILE *st;
    st=fopen("filewritetest.txt","r");
    if(st==NULL)
        printf("file not found");
    s=fgetc(st);
    while(!feof(st)){
        printf("%c",s);
        s=fgetc(st);
    }
    fclose(st);
    return 0;
}