#include <stdio.h>
#include <string.h>
void proc2(char str[])
{
    char s[100];
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            s[j] = str[i];
            j++;
        }
    }

    s[j] = '\0';
    strcpy(str, s);
}

int main()
{
    char str[100];

    scanf("%99s", str);

    proc2(str);

    printf("str=%s", str);

    return 0;
}
