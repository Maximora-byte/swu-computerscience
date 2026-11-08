#include <stdio.h>
int main()
{
    int c;
    int letters = 0, space = 0, digit = 0, other = 0;

    while ((c = getchar()) != '\n' && c != EOF)
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            letters++;
        }
        else if (c >= '0' && c <= '9')
        {
            digit++;
        }
        else if (c == ' ')
        {
            space++;
        }
        else
        {
            other++;
        }
    }

    printf("letters=%d;space=%d;digit=%d;other=%d;",
           letters, space, digit, other);

    return 0;
}
