#include<stdio.h>
int checkmax(int arr[], int n)
{
    int max=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max)
            {
                max=arr[i];
            }
    }
    return max;
    
}
int main()
{
    int arr[]={23,45,67,34,56,78,22};
    printf("%d", checkmax(arr,7));
    return 0;
}