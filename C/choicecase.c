#include<stdio.h>
int main()
{
    int a,b,c,d,i,choice;
    START:
    printf("\n1. Press 1 to add two numbers");
    printf("\n2. Press 2 to find if entered number is odd or even");
    printf("\n3. Press 3 to print no. of natural numbers\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("\nEnter two numbers >>");
            scanf("%d%d",&a,&b);
            printf("\nAddition of two numbers is %d \n",a+b);
            break;
        case 2:
            printf("\nEnter number please >>");
            scanf("%d",&c);
            c%2==0?printf("\nEntered number is even\n"):printf("\nEntered number is odd\n");
            break;
        case 3:
            printf("\nEnter number of natural numbers to be printed \n");
            scanf("%d",&d);
            for(i=1;i<=d;i++){
            printf("%d",i);
            }
            break;
    }
    printf("\nPress 1 to exit the program :- \n Press 2 for another transaction ");
    scanf("%d", &choice);
    if(choice!=1){goto START;}
return 0;
}