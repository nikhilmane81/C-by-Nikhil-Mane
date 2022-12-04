#include<stdio.h>
struct book
{
    int bookid;
    char name[20];
    float price;
};

int main()
{
    struct book b1;
    FILE *pp;
    pp=fopen("myfile.txt","wb");
    printf("Enter bookid, book name and book price");
    scanf("%d",&b1.bookid);
    fflush(stdin);
    gets(b1.name);
    scanf("%f",&b1.price);
    fwrite(&b1,sizeof(b1),1,pp);
    fclose(pp);
    return 0;
}