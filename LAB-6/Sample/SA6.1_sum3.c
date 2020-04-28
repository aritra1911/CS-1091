// WAP to SUM two numbers entered through keyboard by using a suitable user
// defined function ( say SUM) for addition operation.
// (By using Category-4: Function does not take arguments and returns value)
#include<stdio.h>
int SUM(); //Function Prototype or Function Declaration
int main()
{ int k;
    k = SUM(); //Function Call
    printf("\nAddition of two numbers is %d.", k);
    return 0;
}
/*Function definition of SUM does not take arguments and does not return any
 * value*/
int SUM()
{
    int x, y, z;
    printf("\nEnter two numbers :");
    scanf("%d %d",&x, &y);
    z=x+y;
    return z;
}
