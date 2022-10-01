#include<stdio.h>
int main()
{
          int a=10,b=20,*x,*y,t;

          printf("enter the value of a :");
          printf("\n address a:%u ",&a);
          printf("enter the value of b :");
          printf("\n address b:%u ",&b);

          printf("before swapping :%d=%d\n",a,b);
          x=&a;
          y=&b;
      
          t=*y;
          *y=*x;
          *x=t;
	 printf("\n value a:%d",b);
         printf("\n value b:%d",a);

          printf("after swapping : a%d b=%d\n",a,b);
          return 0;
}

 

 