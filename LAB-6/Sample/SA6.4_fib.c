// A Fibonacci sequence is defined as follows: the first and second terms in the sequence are 0 and 1.
// Subsequent terms are found by adding the preceding two terms in the sequence (Fi=Fi-1+Fi-2). WAP to
// find out the value of nth term of the Fibonacci sequence by writing a suitable user defined function
// (say fib) for it.
#include<stdio.h>
int fib(int);
int main()
{
    int n;
    printf("\nEnter term number :");
    scanf("%d",&n);
    printf("\nThe value of the term-%d of Fibonacci sequence is %d.", n, fib(n));
    return 0;
}
/*User defined iterative function fib that returns the value of ith term of
 * Fibonacci sequence*//*
int fib(int i)
{
    int i,f1=0,f2=1,f;
    if (i==0 || i==1)
        return i;
    else
    {
        for(i=1; i<=n-2; i++)
        {
            f=f1+f2;
            f1=f2;
            f2=f;
        } return f;
    }
}
OR*/
/*Recursive version of the Fibonacci function to compute the ith term*/
int fib(int i)
{
    if(i==0 || i==1)
        return (i);
    else
        return (fib(i-1)+ fib(i-2));
}
