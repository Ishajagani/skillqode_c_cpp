// double poniter

#include<stdio.h>
int main()
{
	int a=10,*p,**p2;
	p=&a;
	p2=&p;
	printf("\nvalue of a: %d",a);
	printf("\naddress of a: %u",&a);

	printf("\nvalue a using p: %d",*p);
	printf("\naddress a using p: %u",p);
	printf("\naddress of p: %u",&p);
	
	printf("\nvalue a using p2: %d",**p2);
	printf("\naddress a using p2: %u",*p2);
	printf("\naddress p using p2: %u",p2);
	printf("\naddress of p2: %u",&p2);
}
	