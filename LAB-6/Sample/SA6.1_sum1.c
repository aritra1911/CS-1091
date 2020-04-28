// WAP to SUM two numbers entered through keyboard by using a suitable user
// defined function ( say SUM) for addition operation.
//(By using Category-2: Function taking arguments and does not return any value)
#include<stdio.h>
void SUM(int, int); //Function Prototype or Function Declaration
int main()
{
    int a, b, c;
    printf("\nEnter two numbers :");
    scanf("%d %d",&a, &b);
    SUM(a,b); //Function Call
    return 0;
}
/*Function definition of SUM taking arguments and does not return any value*/
void SUM(int x, int y)
{
    int z;
    z= x + y;
    printf("\nAddition of two numbers is %d.", z);
}
