#include <stdio.h>
struct Book {
    int id;
    char name[100];
    char author[100];
    float price;
    int count;
};
int main() {
    struct Book book;
    scanf("%d %99s %99s %f %d",
          &book.id,
          book.name,
          book.author,
          &book.price,
          &book.count);
    printf("编号:%d,书名:%s,作者：%s,价格：%f,数量：%d",
           book.id,
           book.name,
           book.author,
           book.price,
           book.count);
    return 0;
}
