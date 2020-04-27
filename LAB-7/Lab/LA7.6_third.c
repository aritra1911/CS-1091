// WAP to replace all occurrences of a character in a string with the previous
// 3rd character if any of the character.
#include <stdio.h>
#include <string.h>

#define BUFFER 100

void rep_third(char*, char*);

int main() {
    char str[BUFFER], rep[BUFFER];

    printf("Enter your text:\n");
    scanf("%[^\n]", str);
    
    putchar(getchar());

    rep_third(str, rep);

    printf("Replaced string:\n%s\n", rep);

    return 0;
}

void rep_third(char* str, char* rts) {
    char* p = rts;
    
    for (int i=0; i<strlen(str); i++) {
        if (i-3 < 0) *p++ = str[i];
        else *p++ = str[i-3];
    }

    *p++ = '\0';
}
