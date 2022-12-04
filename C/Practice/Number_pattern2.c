#include<stdio.h>
int main()
{
    int i, j, k;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j>=5-i)
            {
            printf("%d",i);
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}