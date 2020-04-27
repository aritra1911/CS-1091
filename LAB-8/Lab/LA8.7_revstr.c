// WAP to print a string in reverse using a pointer.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main() {
    char* str = malloc(MAX);
    printf("Enter string: ");
    scanf("%[^\n]", str);
    putchar(getchar());
    char* str_end = str + strlen(str) - 1;
    char *p;
    printf("The reversed string:\n");
    for (p=str_end; p!= str; p--)
        putchar(*p);
    putchar(*p);
    putchar('\n');
    free(str);
    return 0;
}
