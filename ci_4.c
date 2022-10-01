#include<stdio.h>
#include<math.h>
float CmInt()
{
	float principle,time,rate,CI;
	
	printf("enter principle(amount) :");
	scanf("%f",&principle);

	printf(" enter time :");
	scanf("%f",&time);

	printf(" enter rate :");
	scanf("%f",&rate);

	CI = principle*(pow((1+rate/100),time));

	printf(" compound  interest =%f",CI);
}
int main()
{
	CmInt();
}        