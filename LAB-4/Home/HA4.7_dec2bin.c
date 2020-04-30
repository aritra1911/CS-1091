// WAP to convert a decimal number into its equivalent binary number.
#include <stdio.h>

int main() {
    int dec, i=0;
    int bin[32];

    printf("Enter number: ");
    scanf("%d", &dec);

    while (dec > 0) {
        bin[i++] = dec % 2;
        dec /= 2;
    }

    printf("In binary : ");
    while (i--)
        printf("%d", bin[i]);
    putchar('\n');

    return 0;
}
