// WAP to calculate x y by writing a function(say POWER) for it.
#include <stdio.h>

int power(int, int);

int main() {
    int m, n;
    
    printf("Enter two numbers separated by a space:\n");
    scanf("%d %d", &m, &n);
    
    printf("%d raised to the power of %d is %d\n", m, n, power(m, n));

    return 0;
}

int power(int x, int y) {
    if (y == 0) return 1;
    return x*power(x, y-1);
}
