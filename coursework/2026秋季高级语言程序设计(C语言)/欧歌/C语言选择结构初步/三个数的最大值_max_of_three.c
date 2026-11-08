#include<stdio.h>
int main()
{
    int a,b,c,temp;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        temp=a;
        if(a>c)
        {
            printf("最大值为%d",a);
        }
        if(a<c)
        {
            printf("最大值为%d",c);
        }
    }
    else{
        temp=b;
        if(b<c)
        {
            printf("最大值为%d",c);
        }
        else{
            printf("最大值为%d",b);
        }
    }
    return 0;
}