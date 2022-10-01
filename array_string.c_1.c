#include<stdio.h>
int main()
{
	int i,j,k;
	char str1[20],str2[20];
	printf("enter string= :");
	gets(str1);

	for(i=0;str1[i]!='\0';i++);
	printf("\n string length =%d",i);
	k=i-1;	
	for(j=0;j<=i;j++)
	{
		str2[j]=str1[k];
		k--;	
	}
	str2[j]!='\0';
	printf("\n  reverse str2=%s",str2);
	
	return 0;
}
	
