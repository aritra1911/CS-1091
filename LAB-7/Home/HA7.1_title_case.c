// WAP to capitalize first character of each word of a string entered through
// keyboard.
#include <stdio.h>
#include <ctype.h>

#define BUFFER 100

int main() {
    char str[BUFFER];

    printf("Enter a string:\n");
    scanf("%[^\n]", str);

    char *p, *prev_p=NULL;
    for (p=str; *p!= '\0'; p++) {
        if (prev_p == NULL || isspace(*prev_p))
            *p = toupper(*p);
        prev_p = p;
    }

    printf("Title cased string:\n%s\n", str);

    return 0;
}
