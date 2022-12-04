#include<stdio.h>
struct book
{
  int bookid;
  char bookname[20];
  float price;
};
struct book input()
{
    struct book b;
    printf("Enter the book's ID, Name and price ");
    scanf("%d",&b.bookid);
    fflush(stdin);
    gets(b.bookname);
    scanf("%f",&b.price);
    return (b);
}
void display(struct book b)
{
    printf("%d,%s,%f",b.bookid,b.bookname,b.price);
}
int main()
{
    struct  book b1;
    b1=input();
    display(b1);
    return 0;
}