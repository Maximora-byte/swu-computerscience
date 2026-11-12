#include <stdio.h>
void proc5(char *s1, char *s2, char *s3)
{
    int i = 0, j = 0;

    while (s1[i] != '\0')
    {
        s3[i] = s1[i];
        i++;
    }

    while (s2[j] != '\0')
    {
        s3[i] = s2[j];
        i++;
        j++;
    }

    s3[i] = '\0';
}

int main()
{
    char s1[100], s2[100], s3[200];

    scanf("%99s %99s", s1, s2);

    proc5(s1, s2, s3);

    printf("str=%s", s3);

    return 0;
}
