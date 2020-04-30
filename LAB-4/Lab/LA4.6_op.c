// WAP to print the series as 3 5 7 11 13 17..........n, where n is given by user.
#include <stdio.h>
#include <math.h>

int main() {
    int n, y=3;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 3) return 0;
    printf("%d", y);

    for (int i=5; i <= n; i+=2) {
        int flag = 0;
        for (int j=2; j <= sqrt(i); j++)
            if (i % j == 0) { flag = 1; break; }
        if (!flag) printf(" %d", i);
    }

    putchar('\n');

    return 0;
}
