#include<stdio.h>
int main()
{
	int a[5][5];
	int i,j,x=0,y=0,z=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    printf("enter a[%d][%d]:",i,j);
		    scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n your matrix is \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
	       for(j=0;j<3;j++)
	        {
		   if(i==j)
		   {
			x=x+a[i][j];
	           }
		   else if(j<i)
		   {
		        y=y+a[i][j];
		   }
		   else
		   {
			z=z+a[i][j];
		   }
	     }			
	  printf("\n");	 

	}  
	printf("\n diagonal total a[0][0]+a[1][1]+a[2][2] :%d",x);
	printf("\n\t upper triangle total a[0][01]+a[0][2]+a[1][2] :%d",y);  
	printf("\n\t lower triangle total a[1][0]+a[2][0]+a[2][1] :%d",z);	
	
	return 0;
}  



