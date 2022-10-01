#include <stdio.h>
struct area
{
    int l;
    int b;
};
int main()
{
	struct area rect1={10,20};
	printf("\n l :%d \t b:%d",rect1.l,rect1.b);
	printf("\n area of rect1 %d",rect1.l*rect1.b);

	struct area rect2;

	printf("\nenetr l:");
	scanf("%d",&rect2.l);
	printf("enetr b:");
	scanf("%d",&rect2.b);

	printf("\n l :%d \t b:%d",rect2.l,rect2.b);
	printf("\n area of rect2 %d",rect2.l*rect2.b);
	
	
    
    return 0;
}