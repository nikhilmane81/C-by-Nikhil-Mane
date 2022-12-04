#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    /*
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", *(arr+i));
    }
    */
    int *ptr;
    ptr = &arr[0];
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }

    return 0;
}