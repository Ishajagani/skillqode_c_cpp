//pointer to array

#include<stdio.h>
int main()
{
	int a[5]={23,43,54,51,76};
	int i,*ptr=NULL;
	ptr=a;
	printf("\naddress\tvalue\n");
	printf("~~~~~~~~~~~~~~~~~~~");
	for(i=0;i<5;i++)
	{
	  //printf("\n%u\t%d",&a[i,a[i]);
	    printf("\n%u\t%d",(ptr+i),*(ptr+i));
	}
	//printf("\n %u\t%d",(ptr+2),*(ptr+2));
}