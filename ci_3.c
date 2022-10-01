//wrnp

#include<stdio.h>
#include<math.h>
float CmInt()
{
	float principle,rate,time,CI;
	
	printf(" Enter principle(amount) :");
	scanf("%f",&principle);

	printf(" Enter rate :");
	scanf("%f",&rate);

	printf(" Enter time :");
	scanf("%f",&time);

	CI=principle*(pow((1+rate/100),time));
	
	return (CI);
}	
int main()
{
     float CI;
     CI=CmInt();
     printf("\n CI=%f",CI);
}