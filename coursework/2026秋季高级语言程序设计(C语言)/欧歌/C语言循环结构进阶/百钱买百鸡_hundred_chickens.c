#include <stdio.h>
int main()
{
    int x, y, z;
    for (x = 0; x <= 20; x++)
    {
        for (y = 0; y <= 33; y++)
        {
            z = 100 - x - y;
            if (5*x + 3*y + z/3 == 100 && z%3 == 0)
            {
                printf("公鸡%d个,母鸡%d个,小鸡%d个\n", x, y, z);
            }
        }
    }
    return 0;
}
