#include <stdio.h>
int main()
{
    FILE *fp;
    char filename[256];
    int i, n, last = 0;
    printf("请输入要保存的文件文件名");
    scanf("%255s", filename);

    fp = fopen(filename, "wb");
    if (fp == NULL)
        return 1;
    for (i = 1; i < 10000; i++)
    {
        n = i % 10;
        if (n * n * n == i)
        {
            fwrite(&i, sizeof(int), 1, fp);
        }
    }
    fclose(fp);
    fp = fopen(filename, "rb");
    if (fp == NULL)
        return 1;
    while (fread(&n, sizeof(int), 1, fp) == 1)
    {
        printf("%d ", n);
        last = n;
    }
    printf("%d ", last);
    fclose(fp);
    return 0;
}