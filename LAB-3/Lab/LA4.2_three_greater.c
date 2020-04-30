// WAP to input any three integers distinct and display the greater of three
// integers.
#include <stdio.h>

int main() {
    int a, b, c, max;
    
    printf("Enter three distinct numbers separated by spaces:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b || b == c || c == a) {
        printf("Entered numbers aren't distinct");
        return 1;
    }

    if (a > b) {
        if (a > c)
            max = a;
        else
            max = c;
    } else {
        if (b > c)
            max = b;
        else
            max = c;
    }

    printf("%d is maximum\n", max);

    return 0;
}
