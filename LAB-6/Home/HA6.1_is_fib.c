// WAP to test whether a number num (num is entered through keyboard) is a number
// in the Fibonacci sequence or not.
#include <stdio.h>

int is_fib(int);
int fib(int);

int main() {
    int n, t;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    putchar(getchar());

    if ((t = is_fib(n)) != -1)
        printf(
            "The number corresponds to term #%d in the fibonacci sequence\n", t
        );
    else
        printf("The number doesn't exist in the fibonacci sequence\n");
    
    return 0;
}

int is_fib(int n) {
    int i, f;
    for (i=0; n > (f=fib(i)); i++);
    return (n == f) ? i : -1;
}

int fib(int n) {
    if (n == 0 || n == 1)
        return n;
    return fib(n-1) + fib(n-2);
}
