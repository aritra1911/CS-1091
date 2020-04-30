// WAP to input any integer and print your name that many times.
#include <stdio.h>

#define NAME "Aritra Sarkar"

int main() {
    int c;

    printf("How many times? ");
    scanf("%d", &c);

    while (c--)
        printf("%s\n", NAME);

    return 0;
}
