#include<stdio.h>
int main()
{
	int i,length,k,j=0;
	int flag=0;
	char str1[100],str2[100];
	printf("enter string:");
	gets(str1);

	for(i=0;str1[i]!='\0';i++);
	{
		printf("\n str length=%d",i);
	}
	k=i-1;
	for(j=0;j<=i;j++)
	{
		str2[j]=str1[k];
		k--;
	}
	printf("\n reverse str =%s",str2);
	length=i;

	for(i=0;i<=length/2;i++)
	{
		printf("\n %c - %c",str1[i-1],str1[length-i]);
		if(str1[i]==str2[i])
		{
			flag=0;
		}
		else
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{	
	 
		printf("\n string is palindrom");
	}
	else
	{	
		printf("\n string is not palindrom");
	}
	
}
	
