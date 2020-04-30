// WAP to check whether a character entered through keyboard is a digit, letter,
// special character etc or not.
#include <stdio.h>

int main() {
    int c;

    printf("Enter character: ");
    c = getchar();

    if (c >= '0' && c <= '9')
        printf("Digit\n");
    else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        printf("Letter\n");
    else
        printf("Special Character\n");

    return 0;
}
