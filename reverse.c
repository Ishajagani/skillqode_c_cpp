//WPNR
#include<stdio.h>
void reverse(int number,int rev,int rem)
{
	
	printf("revers number=%d",rev);
	
}
int main()
{
	int number,rev=0,rem;
	printf("enter number=");
	scanf("%d",&number);
	for(;number!=0;)
	{
		rem=number%10;
		rev=(rev*10)+rem;
		number=number/10;
	}
	
	reverse(number,rev,rem);
}
