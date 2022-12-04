#include<stdio.h>
#include<string.h>
struct book
{
    char name[20];
    char author[20];
    double price;
    int pages;
};
void input(struct book *p)
{
    printf("Enter author, book name, price and pages \n");
    scanf("%s %s %f %d", p->author, p->name, &p->price, &p->pages);
}
void output(struct book b)
{
    printf("%s %s %f %d ", b.author, b.name, b.price, b.pages);
}
int main()
{
    struct book b1, b2;
    struct book *ptr = &b2;
    ptr->pages = 200;
    ptr->price = 350;
    strcpy(ptr->author,"Shinde");
    strcpy(ptr->name, "Physics");
    printf("%s %s %f %d ", ptr->author, ptr->name, ptr->price, ptr->pages);
    printf("\n");
    input(&b1); //call by address 
    output(b1); //call by value
    return 0;
}