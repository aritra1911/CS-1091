// WAP by designing a recursive function to calculate the sum of all even digits
// of any given integer.
#include <stdio.h>

int sum_evend(int, int);

int main() {
    int num;
    
    printf("Enter number:\n");
    scanf("%d", &num);
    
    printf("Sum of even digits : %d\n", sum_evend(num, 0));
    
    return 0;
}

int sum_evend(int a, int s) {
    if (a <= 0) return s;
    if (!((a % 10) & 1)) s += a % 10;
    return sum_evend(a / 10, s);
}
