// WAP to SUM two numbers entered through keyboard by using a suitable user
// defined function (say SUM) for addition operation.
// (By using Category-1: Function taking arguments and returns value)
#include<stdio.h>
int SUM(int, int); //Function Prototype or Function Declaration
int main()
{
    int a, b, c;
    printf("\nEnter two numbers :");
    scanf("%d %d",&a, &b);
    c = SUM(a,b); //Function Call
    printf("\nAddition of two numbers is %d.", c);
    return 0;
}
/*Function definition of SUM taking
 * arguments and returns value*/
/*int SUM(int x, int y)
{
    int z;
    z= x + y;
    return z;
}
OR*/
/*Function definition SUM taking arguments
 * and returns value*/
int SUM(int x, int y)
{
    return x+y;
}
