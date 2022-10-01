#include<stdio.h>
void dosum()
{
	int a,b;
	printf("\n enter value A:");
	scanf("%d",&a);
	printf("\n enter value 	b:");
	scanf("%d",&b);
		
	printf("\n sum :%d",a+b);
	printf("\n sum :%d",a-b);
	printf("\n sum :%d",a*b);
	printf("\n sum :%d",a/b);
	printf("\n sum :%d",a%b);
	
}
int main()
{
	dosum();
}