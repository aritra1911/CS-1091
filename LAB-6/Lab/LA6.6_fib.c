// A Fibonacci sequence is defined as follows:
// the first and second terms in the sequence are 0 and 1. Subsequent terms are
// found by adding the preceding two terms in the sequence (F i =F i -1+F i-2 ).
// WAP to generate the first n terms of the sequence by writing a suitable user
// defined function (say fib) to be used to get nth term Fibonacci value.
#include <stdio.h>

int fib(int);

int main() {
    int n;
    printf("Enter # of terms: ");
    scanf("%d", &n);
    
    putchar(getchar());

    printf("First %d terms of the fibonacci sequence are:\n%d", n, fib(1));
    for (int i=2; i<=n; i++) printf(", %d", fib(i));
    putchar('\n');
    
    return 0;
}

int fib(int n) {
    if (n == 0 || n == 1)
        return n;
    return fib(n-1) + fib(n-2);
}
