#include <stdio.h>
int main()
{
    char a[80];
    int i;
    int big = 0, small = 0, num = 0;
    int space = 0, other = 0;

    fgets(a, sizeof(a), stdin);

    for (i = 0; a[i] != '\0' && a[i] != '\n'; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
            big++;
        else if (a[i] >= 'a' && a[i] <= 'z')
            small++;
        else if (a[i] >= '0' && a[i] <= '9')
            num++;
        else if (a[i] == ' ')
            space++;
        else
            other++;
    }

    printf("大写字符%d个\n", big);
    printf("小写字符%d个\n", small);
    printf("数字%d个\n", num);
    printf("空格%d个\n", space);
    printf("其他字符%d个\n", other);

    return 0;
}
