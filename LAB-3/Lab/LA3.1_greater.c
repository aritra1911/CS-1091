// WAP to input any two integers distinct and display the greater of two
// integers.
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter two distinct numbers separated by space:\n");
    scanf("%d %d", &a, &b);

    if (a == b) {
        printf("Entered numbers aren't distinct\n");
        return 1;
    }

    if (a > b)
        c = a;
    else
        c = b;

    printf("%d is greater\n", c);

    return 0;
}
