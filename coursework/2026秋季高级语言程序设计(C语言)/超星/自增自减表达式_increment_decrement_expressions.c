#include<stdio.h>

 

int main()

{

       int i,j;

      

       i = 5;

       j = ++i*3-2;

       printf("i=%d,j=%d\n",i,j);

      

      

       i = 5;

       j = 3-2*i++;

       printf("i=%d,j=%d\n",i,j);

      

       i = 7;

       j = 3*i-- +2;

       printf("i=%d,j=%d\n",i,j);

      

       i = 7;

       j = 3 + --i*2;

       printf("i=%d,j=%d\n",i,j);

      

       return 0;

}