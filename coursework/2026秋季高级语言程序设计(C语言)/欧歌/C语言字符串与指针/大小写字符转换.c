#include <stdio.h>
void proc2(char str[])
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
}

int main()
{
    char str[100];

    scanf("%99s", str);

    proc2(str);

    printf("str=%s", str);

    return 0;
}
