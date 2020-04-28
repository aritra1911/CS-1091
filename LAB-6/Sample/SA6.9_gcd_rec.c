// WAP to calculate GCD/HCF of two numbers by using a recursive function for GCD.
#include <stdio.h>
int gcd(int,int);
int main()
{
    int a,b,g;
    printf("\nEnter two numbers=>");
    scanf("%d%d",&a, &b);
    printf("\nThe GCD of %d and %d is %d\n", a, b, gcd(a,b));
    return 0;
}
/*GCD Recursive Function*/
int gcd(int a, int b)
{
    if(a==b)
        return a;
    else if (a>b)
        gcd(a-b, b);
    else
        gcd(a, b-a);
}
