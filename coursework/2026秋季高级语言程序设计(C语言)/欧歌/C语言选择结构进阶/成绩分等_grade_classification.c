#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>=90){
        printf("你的成绩等级是A");
    }
    else if(a>=80){
        printf("你的成绩等级是B");
    }
    else if(a>=70){
        printf("你的成绩等级是C");
    }
    else if(a>=60){
        printf("你的成绩等级是D");
    }
    else if(a>=0){
        printf("你的成绩等级是E");
    }
    else{
        printf("输入的成绩不正确");
    }
    return 0;
}