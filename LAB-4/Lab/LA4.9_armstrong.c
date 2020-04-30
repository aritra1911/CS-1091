// WAP to check whether an integer number is a Armstrong number or not!.
#include <stdio.h>

int main() {
    int n, m, sum_of_cubes = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    m = n;  // save a copy of the original number

    while (n > 0) {
        int r = n % 10;
        sum_of_cubes += r * r * r;
        n /= 10;
    }

    if (sum_of_cubes == m)
        printf("%d is an Armstrong number\n", m);
    else
        printf("%d is not an Armstrong Number\n", m);

    return 0;
}
