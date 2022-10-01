 #include <stdio.h>
float units;
int calc(float units)
{
	float amount;

	if(units<=100)
		amount=units*0.8+50;
	else if(units<=300)
		amount=(units-100)*0.8+110;
	else
		amount=(units-300)*0.9+270;
	if(amount>300)
		amount=amount*1.15;
	printf("\n electricity bill for %2.f unit is %.2f ruppes.",units,amount);
}
void getdata()
{
	printf("\n enter units ...:");
	scanf("%f",&units);
	calc(units);
}
int main()
{
	getdata();
}