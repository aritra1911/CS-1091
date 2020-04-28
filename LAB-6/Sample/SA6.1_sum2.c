// WAP to SUM two numbers entered through keyboard by using a suitable user
// defined function ( say SUM) for addition operation.
// (By using Category-3: Function does not take arguments and does not return any value)
#include<stdio.h>
void SUM(); //Function Prototype or Function Declaration
int main()
{
    SUM(); //Function Call
    return 0;
}
/*Function definition of SUM does not take arguments and does not return any
 * value*/
void SUM()
{
    int x, y, z;
    printf("\nEnter two numbers :");
    scanf("%d %d",&x, &y);
    z=x+y;
    printf("\nAddition of two numbers is %d.", z);
}
