//WPNR
#include<stdio.h>
void pattern(int a)

{
                   int i,j,sp=a;
                   for(i=0;i<=a;i++)
                   {
                              for(j=0;j<=sp;j++)
                              {
                                        printf(" ");
                              }
                              for(j=1;j<=i;j++)
                              {
                                        printf(" *");
                              }
                              printf("\n");
                              sp--;
                   }
	for(i=4;i>=1;i--)
                   {
                              for(j=1;j<=sp+3;j++)
                              {
                                        printf(" ");
                              }
                              for(j=1;j<=i;j++)
                              {
                                        printf(" *");
                              }
                              printf("\n");
                              sp++;
                   }
}
int main()
{
        int a;
        printf("\n enter value of  row");
        scanf("%d",&a);

        pattern(a);
}
