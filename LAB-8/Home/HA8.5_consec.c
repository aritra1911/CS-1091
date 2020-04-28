// WAP to swap two consecutive characters starting from left to right of a
// string.
#include <stdio.h>
#include <string.h>
#define MAX 100

void swap(char*, char*);

int main() {
    char str[MAX];

    printf("Enter string:\n");
    scanf("%[^\n]", str);

    putchar(getchar());

    for (char* p=str; *p!='\0'; p++)
        if (*(p+1) != '\0') {
            swap(p, p+1);
            p++;
        }

    printf("Here's your consecutively replaced string:\n%s\n", str);

    return 0;
}

void swap(char* c1, char* c2) { char c = *c1; *c1 = *c2; *c2 = c; }
