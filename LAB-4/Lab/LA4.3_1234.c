// WAP to print the series as 1 2 3 4 5 6 7 ..........100.
#include <stdio.h>

int main() {
    int c = 1;

    printf("%d", c);
    
    while (c++ < 100)
        printf(" %d", c);
    putchar('\n');

    return 0;
}
