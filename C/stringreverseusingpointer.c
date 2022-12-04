#include<stdio.h>
char* reverse(char*);
int main()
{
    printf("%s", reverse("Computer"));
    return 0;
}
char* reverse(char *p)
{
    int k,i;
    char t;
    for(k=0;*(p+k)!='\0';k++);
    for(i=0;i<1/2;i++)
    {
        t=*(p+k);
        *(p+k)=*(p+k-1-i);
        *(p+k-1-i)=t;
    }
    return (p);
}