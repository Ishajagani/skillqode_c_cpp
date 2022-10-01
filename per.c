#include<stdio.h>		//wrwp
int r,m1,m2,m3,total,pr;
void data()
{
	
	
	printf("enter r:");
	scanf("%d",&r);
	//printf("enter name :");
	//scanf("%s",a);
	printf("enter english :");
	scanf("%d",&m1);
	printf("enter hindi :");
	scanf("%d",&m2);
	printf("enter maths :");
	scanf("%d",&m3);
	 
}	
void calculate()

{
	
	total =m1+m2+m3;
	//printf("\ntotal=%d",total);
	pr=total/3;
	//printf("\npercent =%d",pr);
}

void print()
{
	//string a;
	printf(" ");
	printf("\nroll\tm1\tm2\tm3\ttotal\tpr\tgrade");
	printf("\n%d\t%d\t%d\t%d\t%d\t%d\t",r,m1,m2,m3,total,pr);
	
	if(pr>80)
	{
	printf("A");
	}
	else if(pr>60&&pr<80)
	{
	printf(" B");
	}
	else if(pr>40&&pr<60)
	{
	printf("C");
	}
	else 
	{
	printf("fail");
	}

	printf("\n______________________________________________________");
}
void main()
{
  	 data();
	calculate();
	print();

}













