#include <stdio.h>
int main()
{
    int num1, num2;
    char op;
    scanf("%d%c%d", &num1, &op, &num2);
    switch(op)
    {
        case '+':
            printf("%d", num1 + num2);
            break;

        case '-':
            printf("%d", num1 - num2);
            break;

        case '*':
            printf("%d", num1 * num2);
            break;

        case '/':
            if(num2 == 0) {
                printf("除数不能为0");
            }
            else {
                printf("商为%d,余数为%d",
                       num1 / num2, num1 % num2);
            }
            break;

        default:
            printf("运算符错误");
    }

    return 0;
}