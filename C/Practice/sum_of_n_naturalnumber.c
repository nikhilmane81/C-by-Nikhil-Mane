#include<stdio.h>
int main()
{
  int num, sum=0;
  printf("Enter how many natural number you want to sum ");
  scanf("%d", &num);
  for (int i = 1; i <= num; i++)
  {
      sum+=i;
  }
  printf("%d", sum);
      
    return 0;
    
}