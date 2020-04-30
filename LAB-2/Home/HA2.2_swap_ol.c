// WAP swap the contents of two variables by using a single statement for swap in
// C.
#include <stdio.h>

int main() {
    int x, y;

    printf("Enter two numbers separated by space:\n");
    scanf("%d %d", &x, &y);

    (x ^= y), (y ^= x), (x ^= y);

    printf("Numbers after swapping : %d %d\n", x, y);

    return 0;
}
