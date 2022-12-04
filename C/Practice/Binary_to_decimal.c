#include <stdio.h>  
#include <conio.h>  
int binaryTodecimal (char num[])  
{  
    int i, deci_num, mul = 0;  
    for ( deci_num = 0, i = str_length(num) - 1; i >= 0; --i, ++mul)  
    {  
            deci_num = deci_num + (num[i] - 48) * (1 << mul);  
    }  
      
    return deci_num;  
 }  
   
 int str_length( char str[])  
 {  
    int i = 0;  
    while (str[i] != '\0')  
        i++;  
    return i;     
 }  
  
int main()  
{  
    char num[] = "1101";  
    int deci_num;  
    printf ("\n The binary number is %s", num);  
    printf ("\n The decimal number of %s is %d", num, binaryTodecimal(num));  
    return 0;  
  }   