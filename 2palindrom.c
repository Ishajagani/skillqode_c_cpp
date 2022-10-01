#include<stdio.h>
int main()
{
	int i,length;
	int flag=0;
	char str1[100];
	printf("enter string:");
	gets(str1);

	for(i=0;str1[i]!='\0';i++);
	{
	printf("\n str length=%d",i);
	}

	length=i;
	for(i=0;i<=length;i++)
	{
		printf("\n %c - %c",str1[i-1],str1[length-i]);
		if(str1[i-1]==str1[length-i])
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
	
