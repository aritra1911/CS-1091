// WAP to find the factorial of a number n by writing a recursive function for it.
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
/*Recursive Factorial function*/
long int fact(int n)
{
    if(n==0 | n==1)
        return 1;
    else
        return n*fact(n-1);
}
