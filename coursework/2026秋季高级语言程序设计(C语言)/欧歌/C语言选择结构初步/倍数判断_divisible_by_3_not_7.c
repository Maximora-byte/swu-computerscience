#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%3==0){
        if(a%7==0){
            printf("否");
        }
        else{
            printf("是");
        }
    }
    else{
        printf("否");
    }
    return 0;
}