#include <stdio.h>
int main()
{
    int ch;
    int count = 0;
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        count++;
    }
    printf("lenth= %d", count);
    return 0;
}