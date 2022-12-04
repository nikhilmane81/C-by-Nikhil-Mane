#include<stdio.h>
struct book
{
    int bookid;
    char name[20];
    float price;
};
int main()
{
    int i;
    struct book b1;
    FILE *pp;
    pp=fopen("forloopingreadwrite.txt","wb");
    for(i=0;i<=3;i++)
    {
    printf("Enter book id and name of book and price of book");
    scanf("%d",&b1.bookid);
    fflush(stdin);
    gets(b1.name);
    scanf("%f",&b1.price);
    fwrite(&b1,sizeof(b1),1,pp);
    }
    pp=fopen("newfile.txt","rb");
    while(fread(&b1,sizeof(b1),1,pp)<0);
    {
    printf("%d,%s,%f",b1.bookid,b1.name,b1.price);
    }
    fclose(pp);
    return 0;
}