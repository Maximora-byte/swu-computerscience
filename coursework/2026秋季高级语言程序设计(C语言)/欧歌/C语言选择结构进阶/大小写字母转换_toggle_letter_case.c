#include <stdio.h>
#include <ctype.h>
int main() {
    char c;
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z') {
        printf("%c\n", tolower((unsigned char)c));
    }
    else if (c >= 'a' && c <= 'z') {
        printf("%c\n", toupper((unsigned char)c));
    }
    return 0;
}