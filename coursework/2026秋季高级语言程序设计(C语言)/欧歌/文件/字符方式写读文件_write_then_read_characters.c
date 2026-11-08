#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char filename[256];
    int ch;
    printf("请输入文件名\n");
    scanf("%255s", filename);
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
    }
    fp = fopen(filename, "w");

    if (fp == NULL)
    {
        printf("无法打开文件\n");
        exit(0);
    }

    while ((ch = getchar()) != '#' && ch != EOF)
    {
        fputc(ch, fp);
    }

    fclose(fp);

    if ((fp = fopen(filename, "r")) == NULL)
    {
        printf("无法打开文件\n");
        exit(0);
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}