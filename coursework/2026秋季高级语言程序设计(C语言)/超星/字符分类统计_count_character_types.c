#include <stdio.h>
int main()
{
    int letters = 0, space = 0, digit = 0, other = 0;
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        if ((ch >= 'a' && ch <= 'z') ||
            (ch >= 'A' && ch <= 'Z'))
        {
            letters++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digit++;
        }
        else if (ch == ' ')
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
