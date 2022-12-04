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
    pp=fopen("myfile.txt","rb");
    fread(&b1,sizeof(b1),1,pp);
    printf("%d,%s,%f",b1.bookid,b1.name,b1.price);
    fclose(pp);
    return 0;
}