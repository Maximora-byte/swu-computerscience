#include<stdio.h>
#include<math.h>
int main()
{
    double a;
    double y;
    scanf("%lf",&a);
    if(a<1){
        y=a*a-1;
        printf("y=%.3f",y);
    }
    if(a>=1 && a<=20){
        y=sqrt(5*a+3)-2;
        printf("y=%.3f",y);
    }
    if(a>20){
        y=(exp(-a)+3*sin(a)+10)/(2*a-1);
        printf("y=%.3f",y);
    }
    return 0;
}