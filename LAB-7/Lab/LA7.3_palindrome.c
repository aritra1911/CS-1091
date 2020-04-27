// WAP to check whether a string entered through keyboard is palindrome or not.
#include <stdio.h>
#include <string.h>

#define BUFFER 100

void reverse(char*, char*);

int main() {
    char str[BUFFER], rts[BUFFER];

    printf("Enter your text:\n");
    scanf("%[^\n]", str);
    
    putchar(getchar());

    reverse(str, rts);

    if (!strcmp(str, rts))
        printf("String is palindrome\n");
    else
        printf("String is not palindrome\n");

    return 0;
}

void reverse(char* str, char* rts) {
    char* p = rts;
    
    for (int i=strlen(str)-1; i>=0; i--)
        *p++ = str[i];

    *p++ = '\0';
}
