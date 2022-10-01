#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	printf("enter string :");
	gets(str1);
	
	printf("\n len :%d",strlen(str1));
	strcpy(str2,str1);
	strrev(str2);
	
	if(strcmp(str1,str2)==0)
	{
		printf("\n string is palindrom");
	}
	else
	{
		printf("\n string is not palindrom");
	}
}
	
