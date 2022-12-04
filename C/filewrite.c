#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    FILE *fp;
    char s[100];
    fp=fopen("codered.txt","w");
    if(fp==NULL)
    {
    printf("File can not be opened");
    }
printf("Enter the information to write in file");
gets(s);
for(i=0;i<strlen(s);i++)
fputc(s[i],fp);
fclose(fp);
return 0;
}
