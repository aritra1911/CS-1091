// WAP to swap two integer numbers without using third variable.
#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter two numbers separated by space:\n");
    scanf("%d %d", &a, &b);

    // Swap a and b
    a = a + b;
    b = a - b;
    a = a - b;

    printf("Numbers after swapping : %d %d\n", a, b);

    return 0;
}
