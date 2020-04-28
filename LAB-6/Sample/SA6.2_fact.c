// WAP to find the factorial of a number n by using a suitable user defined
// function (say fact) for it.
#include <stdio.h>
long int fact(int); //Function Prototype
int main()
{
    int n;
    printf("\nEnter a number :");
    scanf("%d",&n);
    printf("\n%d!=%ld\n", n, fact(n));
    return 0;
}
/*Factorial function*/
long int fact(int n)
{
    long int f=1;;
    int i;
    for (i=1; i<=n; i++)
        f=f*i;
    return (f);
}
