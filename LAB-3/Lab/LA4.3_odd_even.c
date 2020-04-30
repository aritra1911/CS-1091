// WAP to test whether a number entered through keyboard is ODD or EVEN
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Number is ");
    if (n & 1)
        printf("odd\n");
    else
        printf("even\n");

    return 0;
}
