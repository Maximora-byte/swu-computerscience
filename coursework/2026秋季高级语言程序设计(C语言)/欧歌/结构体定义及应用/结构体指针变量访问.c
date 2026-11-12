#include <stdio.h>
struct Book
{
    char ISBN[20];
    char bookname[20];
    char author[20];
    double price;
    int number;
};

int main()
{
    struct Book book;
    struct Book *p = &book;
    scanf("%19s %19s %19s %lf %d",
          p->ISBN,
          p->bookname,
          p->author,
          &p->price,
          &p->number);
    printf("编号:%s,书名:%s,作者：%s,价格：%f,数量：%d",
           p->ISBN,
           p->bookname,
           p->author,
           p->price,
           p->number);

    return 0;
}
