// WAP to count number of digits of a positive integer n by using recursion.
#include <stdio.h>

int sum_of_digits(int, int);

int main() {
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("Sum of digits : %d\n", sum_of_digits(num, 0));
}

int sum_of_digits(int n, int sum) {
    if (n == 0) return sum;
    sum += n % 10;
    return sum_of_digits(n / 10, sum);
}
