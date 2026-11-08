#include <stdio.h>
int isPalindrome(int n)
{
    int a = n / 10000;
    int b = n / 1000 % 10;
    int d = n / 10 % 10;
    int e = n % 10;

    if (a == e && b == d)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    scanf("%d", &n);

    if (isPalindrome(n) == 1)
        printf("是回文\n");
    else
        printf("不是回文\n");

    return 0;
}