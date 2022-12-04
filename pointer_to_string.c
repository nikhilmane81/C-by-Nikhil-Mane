#include<stdio.h>
int main()
{
    char arr[]={'a', 'b', 'c','\0'};
    char str[]={"string"};
    char *ptr;
    ptr = &arr[0];
    printf("\n");
    printf("%d and %d ", sizeof(arr), sizeof(str));
    /*
    for (int i = 0; arr[i]!='\0'; i++)
    {
        putchar(arr[i]);
    }
    */
    for (int i = 0;arr[i]!='\0'; i++)
    {
        printf("%c ", *ptr);
        ptr++;
    }
    
    printf("\n");
    for (int i = 0; str[i]!='\0'; i++)
    {
        putchar(str[i]);
    }
    
    




    return 0;
}