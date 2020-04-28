// WAP to calculate GCD/HCF of two numbers by using a iterative function for GCD.
#include <stdio.h>
int gcd(int,int);
int main()
{
    int a,b,g;
    printf("\nEnter two numbers=>");
    scanf("%d%d",&a, &b);
    printf("\nThe GCD of %d and %d is %d\n",a, b, gcd(a,b));
    return 0;
}
/*GCD Iterative Function*/
int gcd(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else if (b>a)
            b=b-1;
    } return (
            a);
}
