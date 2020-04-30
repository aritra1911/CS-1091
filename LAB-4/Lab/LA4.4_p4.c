// WAP to print the series as 1 2 7 15 31 ..........n, where n is given by user.
#include <stdio.h>

// When in doubt, use curve fitting!
#define P_4(x) 1+x+2*x*(x-1)-(1/6.0)*x*(x-1)*(x-2)+(1/4.0)*x*(x-1)*(x-2)*(x-3)

int main() {
    int n, y;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 1) return 0;
    printf("%d", 1);

    for (int i=1; (y = P_4(i)) <= n; i++)
        printf(" %d", y);

    putchar('\n');

    return 0;
}
