// Develop a user defined function function and test them in the main program
// for the following standard function:
// int MatchAny(char s1[], char s2[]) :It takes two string arguments and it
// returns 1 if s2 is substring of s1, returns 0 if both s1 and s2 are equal
// strings, otherwise, returns -1. Do not use the standard library functions.
#include <stdio.h>
#include <stdlib.h>

#define BUFFER 100

int match_any(char*, char*);
int len(char*);

int main() {
    char str1[BUFFER], str2[BUFFER];

    printf("Enter your text:\n");
    scanf("%[^\n]", str1);
    
    putchar(getchar());

    printf("Enter another one of your text:\n");
    scanf("%[^\n]", str2);

    putchar(getchar());
    
    printf("match_any() returned %d\n", match_any(str1, str2));
    return 0;
}

int match_any(char* str1, char* str2) {
    int l2=len(str2);

    for (char* p=str1; len(p)>=l2; p++)
        for (int i=0; ; i++) {
            if (str2[i] == '\0') {
                if (p == str1) return 0;
                return 1;
            }
            if (p[i] != str2[i]) break;
        }

    return -1;
}

int len(char* str) {
    int l;
    for (l=0; str[l] != '\0'; l++);
    return l;
}
