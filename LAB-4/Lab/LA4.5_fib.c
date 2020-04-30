// WAP to print the series as 1 1 2 3 5 8 13 ..........n, where n is given by
// user.
#include <stdio.h>

int main() {
    int n, a = 1, b = 1, c;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 1) return 0;
    printf("%d %d", a, b);

    while ((c = a + b) <= n) {
        printf(" %d", c);
        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}
