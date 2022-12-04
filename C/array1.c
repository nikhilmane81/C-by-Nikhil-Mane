#include <stdio.h>
int main()
{
    int marks[3];
    float sum;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the marks for subject no %d \n", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        sum = sum + marks[i];
    }
    printf("The average of all the marks is %d \n", ((float)sum/(float)6));
    for (int i = 0; i < 3; i++)
    {
        printf("Marks entered for subject no  %d are %d \n", i, marks[i]);
    }

    return 0;
}