#include<stdio.h>
struct Node
{
    int i;
    char c;
    struct Node *ptr;
};
int main()
{
    struct Node var1;
    struct Node var2;
    struct Node var3;
    struct Node var4;

    var1.i = 65;
    var1.c= 'A';
    var1.ptr = NULL;

    var2.i = 66;
    var2.c = 'B';
    var2.ptr = NULL;

    var3.i = 67;
    var3.c = 'C';
    var3.ptr = NULL;

    var4.i = 68;
    var4.c = 'D';
    var4.ptr = NULL;

    var1.ptr = &var2 ;
    var1.ptr = &var3 ;
    var1.ptr = &var4 ;

    printf("\n %d ", var1.i);
    printf("\n %d ", var2.i);
    printf("\n %d ", var1.ptr -> i);
}