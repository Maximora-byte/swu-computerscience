#include<stdio.h>
int main()
{
  int a,b,c;
  a=22;
  b=33;
  c=a;
  a=b;
  b=c;
  printf("a=%d\n",a);
  printf("b=%d\n",b);
  return 0;
}