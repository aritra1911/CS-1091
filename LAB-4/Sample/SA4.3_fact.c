// WAP to calculate the factorial of a given number.
#include <stdio.h>
int main()
{
    int n,i;
    long int fact=1;
    printf("\nEnter A Number To Find Out Its Factorial=>");
    scanf("%d",&n);
    for (i=n;i>0;i--)
        fact=fact*i;
    printf("\n%d!=%ld\n",n,fact);
    return 0;
}
