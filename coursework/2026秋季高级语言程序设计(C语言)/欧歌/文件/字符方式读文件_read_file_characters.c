
#include <stdio.h>

int main()
{
    FILE *fp;
    int ch;
    char filename[256];
    printf("请输入文件名");
    scanf("%255s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}
