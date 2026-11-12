#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 10
typedef struct ss
{
    char num[10];
    int s;
} STU;

void fun(STU a[], int n, STU *t)
{
    //--------begin-------
    
int i, max = 0;

for (i = 1; i < n; i++)
{
    if (a[i].s > a[max].s)
    {
        max = i;
    }
}

*t = a[max];

    //---------end--------
}

int main()
{
    STU a[N] = {
        {"A01", 81}, {"A02", 89},
        {"A03", 66}, {"A04", 87},
        {"A05", 77}, {"A06", 90},
        {"A07", 79}, {"A08", 61},
        {"A09", 80}, {"A10", 71}
    }, m;

    int i;
    system("CLS");

    printf("*****The original data*****");

    for (i = 0; i < N; i++)
        printf("No=%s Mark=%d\n", a[i].num, a[i].s);

    fun(a, N, &m);

    printf("*****THE RESULT*****\n");
    printf("The top :%s, %d\n", m.num, m.s);

    return 0;
}
