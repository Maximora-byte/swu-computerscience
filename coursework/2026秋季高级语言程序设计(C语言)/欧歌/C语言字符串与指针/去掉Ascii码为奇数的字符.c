#include <stdio.h>
#include <string.h>
void proc4(char str[])
{
    char s[100];
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] % 2 == 0)
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

    proc4(str);

    printf("str=%s", str);

    return 0;
}
