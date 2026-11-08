#include <stdio.h>
int main()
{
    int ch;
    while ((ch = getchar()) != EOF && ch != '!')
    {
        if (ch >= 'A' && ch <= 'Z')
            ch = ch - 'A' + 'a';

        if (ch >= 'a' && ch <= 'y')
            ch++;
        else if (ch == 'z')
            ch = 'a';

        putchar(ch);
    }

    return 0;
}
