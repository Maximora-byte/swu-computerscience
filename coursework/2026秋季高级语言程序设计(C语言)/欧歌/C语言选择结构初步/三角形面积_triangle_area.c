#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    double area,s;
    scanf("%d %d %d",&a,&b,&c);
    s=(a+b+c)*0.5;
    if(a+b<=c || a+c <=b ||c+b<=a )
    {
        printf("这三条边无法构成三角形");
    }
    else
    {
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("三角形面积area=%.1f",area);
    }
    return 0;
}