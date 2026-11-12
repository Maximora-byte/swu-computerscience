#include <stdio.h>
struct Book
{
    char ISBN[20];
    char bookname[100];
    char author[50];
    double price;
    int number;
};

int main()
{
    struct Book books[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%19s %99s %49s %lf %d",
              books[i].ISBN,
              books[i].bookname,
              books[i].author,
              &books[i].price,
              &books[i].number);
    }

    printf("编号\t书名\t作者\t价格\t数量\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%s\t%s\t%s\t%.1f\t%d\t\n",
               books[i].ISBN,
               books[i].bookname,
               books[i].author,
               books[i].price,
               books[i].number);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%s:%.2f\n",
               books[i].bookname,
               books[i].price * books[i].number);
    }

    return 0;
}
