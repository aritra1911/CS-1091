// WAP to subtract a number from another number and display the result.
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers separated by a space:\n");
    scanf("%d %d", &a, &b);

    int sub = a - b;

    printf("Subtraction result : %d\n", sub);

    return 0;
}
