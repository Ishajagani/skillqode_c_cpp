#include<stdio.h>
int main()
{
	int rollno[5];
	int i,m1[5],m2[5],m3[5],total[5];
	float per[5];
	char grade[5];
	
	for(i=0;i<5;i++)
	{
	printf("enter rollno :");
	scanf("%d",&rollno[i]);
	
	printf("enter m1 :");
	scanf("%d",&m1[i]);
	printf("enter m2 :");
	scanf("%d",&m2[i]);
	printf("enter m3 :");
	scanf("%d",&m3[i]);
     }
     printf("\nrollno\tm1\tm2\tm3\ttotal\tper\tgrade");
     for(i=0;i<5;i++)	
     {
	total[i]=m1[i]+m2[i]+m3[i];
	per[i]=total[i]*100/300;
	
	if(per[i]>=75)

	{
	  grade[i]='A';
	}
	else if(per[i]>65 && per[i]<75)
	{
	  grade[i]='B';
	}
	else if(per[i]>50 && per[i]<65)
        {
	  grade[i]='C';
	}
        else if(per[i]>35 && per[i]<50) 
	{
	  grade[i]='D';
	}
	else
	{
	  grade[i]='F';
	}
	printf("\n%d\t%d\t%d\t%d\t%d\t%2.f\t%c",rollno[i],m1[i],m2[i],m3[i],total[i],per[i],grade[i]);
    }
    return 0;
}