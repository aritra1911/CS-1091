// WAP to extract the last character of each word of a given string.
#include <stdio.h>
#include <ctype.h>

#define BUFFER 100

int main() {
    char str[BUFFER];

    printf("Enter a string:\n");
    scanf("%[^\n]", str);

    char* p;
    for (p=str; *p!= '\0'; p++)
        if (isspace(*p) && isalpha(*(p-1)))
            printf("%c\n", *(p-1));

    // Get the last one
    p--;
    if (isalpha(*p))
        printf("%c\n", *p);

    return 0;
}
