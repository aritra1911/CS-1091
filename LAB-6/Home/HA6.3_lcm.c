// WAP to find the LCM of two numbers a and b by using a suitable function (say
// LCM) for this.
#include <stdio.h>

#define LCM(a, b) (a * b) / gcd(a, b)

int gcd(int, int);

int main() {
    int m, n;

    printf("Enter two numbers separated by a space:\n");
    scanf("%d %d", &m, &n);

    printf("LCM of %d and %d is %d\n", m, n, LCM(m, n));

    return 0;
}

int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}
