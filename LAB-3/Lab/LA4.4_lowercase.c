// WAP to read an alphabet from from the user and convert it into lowercase if
// the entered alphabet is in uppercase, otherwise display an appropriate message
#include <stdio.h>

int main() {
    int c;

    printf("Enter a character: ");
    c = getchar();

    if (c >= 65 && c <= 90)
        printf("In lowercase : %c\n", c + 32);
    else if (c >= 97 && c <= 122)
        printf("Alphabet is in lowercase\n");
    else
        printf("Not an alphabet\n");

    return 0;
}
